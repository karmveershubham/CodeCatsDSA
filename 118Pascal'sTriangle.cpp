// 118. Pascal's Triangle
// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

class Solution {
public:
    vector<int> getRow(int row){
        vector<int>ans;
        int i=row;
        long count=1;
        for(int j=1; j<=i;j++){
            ans.push_back(count);
            count=count*(i-j)/j;
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> ans;
        for(int i=1; i<=n; i++){
            ans.push_back(getRow(i));
        }
        return ans;
    }
};
