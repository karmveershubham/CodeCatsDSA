// 2108. Find First Palindromic String in the Array
// Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".
// A string is palindromic if it reads the same forward and backward.

class Solution {
public:
    bool palindrome(string val) {
        int n=val.length()-1;
        int s=0;
        while(s<n){
            if(val[s++]!=val[n--]){
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        bool found=false;
        string ans;
        for(auto val:words){
            if(palindrome(val)){
                found=true;
                return val;
            }
        }
        if(!found) ans="";
        return ans;
    }
};
