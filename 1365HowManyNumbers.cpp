// 1365. How Many Numbers Are Smaller Than the Current Number
// Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
// Return the answer in an array.

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        const int maxValue = 101;  // (0 <= nums[i] <= 100)
        vector<int> count(maxValue, 0);
        vector<int> ans(nums.size(), 0);
      
        for (int num : nums) { count[num]++; }
      
        for (int i = 1; i < maxValue; i++) {
            count[i] += count[i - 1];
        }
  
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans[i] = count[nums[i] - 1];
            }
        }
        return ans;
    }
};
