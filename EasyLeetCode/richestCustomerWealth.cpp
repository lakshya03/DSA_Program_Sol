class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res=0,count;
        for(int i=0;i<accounts.size();i++)
        {
            count=0;
            for(int j=0;j<accounts[i].size();j++)
                count+=accounts[i][j];
            if(res<count)
                res=count;
        }
        return res;
    }
};