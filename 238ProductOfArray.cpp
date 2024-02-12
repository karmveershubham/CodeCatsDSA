// 238. Product of Array Except Self
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,zero=false;;
        for(auto val:nums){
            if(val)
                product*=val;
            else zero=true;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(zero){
                if(nums[i]==0){
                    count++;
                    nums[i]=product ;
                }else
                    nums[i]=0;
            }else
                 nums[i]=product/nums[i];
            
        }
        if(count>=2){
            for(int i=0;i<nums.size();i++){
                nums[i]=0;
            }
        }
        return nums;
    }
};
