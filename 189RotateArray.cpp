// 189. Rotate Array
// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums, n-k, n-1);
        reverse(nums,0,n-k-1);
        reverse(nums,0,n-1);
    }
};
