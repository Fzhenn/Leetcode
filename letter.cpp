#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
	unordered_map<string, vector<string>> map;//定义一个哈希表，键是字符串，值是字符串数组
	for (string str : strs) {//遍历输入的字符串数组
		string key = str;//保留原来的数组
		sort(key.begin(), key.end());
		//对字符串进行排序，得到一个新的字符串key，如果两个字符串是字母异位词，那么它们排序后的结果是一样的
		//key是排序后的字符串 对应哈希表的值是排序前的字符串
		map[key].emplace_back(key);
		//将排序后的字符串作为键，原来的字符串作为值存入哈希表中，如果哈希表中已经存在这个键，那么就将原来的字符串添加到对应的值的数组中
	}
	vector<vector<string>> result;
	for (auto it = map.begin(); it != map.end(); it++) {
		result.emplace_back(it->second);//遍历每个哈希表 把值的数组赋值
	}
}