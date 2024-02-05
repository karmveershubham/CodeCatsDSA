// 2859. Sum of Values at Indices With K Set Bits
// You are given a 0-indexed integer array nums and an integer k.
// Return an integer that denotes the sum of elements in nums whose corresponding indices have exactly k set bits in their binary representation.
// The set bits in an integer are the 1's present when it is written in binary.
// For example, the binary representation of 21 is 10101, which has 3 set bits.

class Solution {
public:

    int countsetBit(int n){
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0; i<nums.size();i++){
            if(countseitBit(i)==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};
