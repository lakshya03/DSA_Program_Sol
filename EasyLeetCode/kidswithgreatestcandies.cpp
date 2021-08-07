class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        if(candies.size()==0)
            return res;
        int maxCandies=candies[0];
        for(int i=1;i<candies.size();i++)
        {
            if(maxCandies<candies[i])
                maxCandies=candies[i];
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=maxCandies)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
        }
};