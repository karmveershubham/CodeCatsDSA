// 2114. Maximum Number of Words Found in Sentences
// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
// You are given an array of strings sentences, where each sentences[i] represents a single sentence.
// Return the maximum number of words that appear in a single sentence.

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount=1;
        for(string &val:sentences){
            int count=1;
            for(int i=0; i<val.length();i++){
                if(val[i]==' '){count++;}
            }
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};
