class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        int i=0;
        while(numRows>0)
        {
            vector<int>ans;
            if(i==0)
            {
                ans.push_back(1);
            }
            
            else
            {
                ans.push_back(1);
                for(int j=0;j<res[i-1].size()-1;j++)
                {
                    ans.push_back(res[i-1][j]+res[i-1][j+1]);
                }
                ans.push_back(1);
            }
            numRows--;
            i++;
            res.push_back(ans);
        }
        return res;
    }
};