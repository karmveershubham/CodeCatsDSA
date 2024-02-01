// 1431. Kids With the Greatest Number of Candies
// There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
// Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.



class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int max=0;
        for(int & candy:candies)
            if(candy>max) max=candy;
        

        for(int & cnady: candies) 
            ans.push_back(cnady+extraCandies>=max? true:false);
        
        return ans;
    }
};
