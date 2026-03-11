#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);
int main()
{
	vector<int> nums1 = { 2, 7, 11, 15 };
	int target1 = 9;
	vector<int> result1 = twoSum(nums1, target1);
	cout << "结果: [" << result1[0] << ", " << result1[1] << "]" << endl;
}
vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int>map;
	for (int i = 0; i < nums.size(); i++) {
		auto it = map.find(target - nums[i]);
		//只用遍历一次就能找到结果，遍历到当前元素时，map中已经存了之前的元素，如果当前元素和之前的某个元素之和等于target，那么就找到了结果
		//如果没找到it==map.end() 找的是键
		if (it != map.end()) {
			return { it->second,i };//返回找到的键值对的值和当前的i即数组的下标
		}
		map[nums[i]] = i;//存入对应的键值对 键是数组的元素，值是数组的下标

	}
	return {};
}
