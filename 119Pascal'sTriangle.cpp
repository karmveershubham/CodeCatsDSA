// 119. Pascal's Triangle II
// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.



class Solution {
public:
    vector<int> getRow(int rowIndex){
        vector<int>ans;
        int i=rowIndex+1;
        long count=1;
        for(int j=1; j<=i;j++){
            ans.push_back(count);
            count=count*(i-j)/j;
        }
        return ans;
    }
};
