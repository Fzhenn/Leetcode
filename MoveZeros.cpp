#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    int right = 0;
    while (right < n) {
        if (nums[right]) {
            swap(nums[right], nums[left]);
            left++;
        }
        right++;
    }
}