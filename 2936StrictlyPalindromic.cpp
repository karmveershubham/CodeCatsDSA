// 2396. Strictly Palindromic Number
// An integer n is strictly palindromic if, for every base b between 2 and n - 2 (inclusive), the string representation of the integer n in base b is palindromic.
// Given an integer n, return true if n is strictly palindromic and false otherwise.
// A string is palindromic if it reads the same forward and backward.

class Solution {
public:
    string baseConversion(int  n, int b){
        string num = "";
        while(n){
            num=num+ to_string(n%b);
            n=n/b;
        }
        return num;
    }
    bool isPalindrome(string str){
        int e=str.length()-1;
        int s=0;
        while(s<=e){
            if(str[s]!=str[e]) return false;
        }
        return true;

    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<n-1;i++){
            string str=baseConversion(n,i);
            if(!isPalindrome(str)){
                return false;
            }
        }
        return true;
    }
};
