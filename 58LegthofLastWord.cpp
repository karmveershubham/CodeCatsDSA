// 58. Length of Last Word
// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal 
// substring
//  consisting of non-space characters only.

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        cout<<n;
        int count=0;
        while(n){
            if(s[n-1]!=' '){
                count++;
                if(n-1==0){
                    return count;
                }else if(s[n-2]==' '){
                    return count;
                }else n--;
            }else
                n--;
        }
        return count;
    }
};


// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         if (s.size() == 0) return 0;
//         int i = 0, end = s.size()-1;
//         while (s[end] == ' ') end--;
//         for (i=end-1; i>=0; --i) {
//             if (s[i] == ' ') return end - i;
//         }
//         return end - i;
//     }
// };
