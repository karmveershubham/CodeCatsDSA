// 1588. Sum of All Odd Length Subarrays
// Given an array of positive integers arr, return the sum of all possible odd-length subarrays of arr.
// A subarray is a contiguous subsequence of the array.

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0; i<n;i++){
            for(int j=i;j<n;j+=2){
                int k=(j-i);
                while(k+1){
                    sum+=arr[k+i];
                    k--;
                }
            }
        }
        return sum;
    }
};
