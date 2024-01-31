// 1672. Richest Customer Wealth

// You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sumMax=0,sum=0;
        for(int i=0; i<accounts.size(); i++){
            sum=0;
            for(int j=0; j<accounts[i].size(); j++){
                sum+=accounts[i][j];
            }
            sumMax=max(sum,sumMax);
        }
        return sumMax;
    }
};
