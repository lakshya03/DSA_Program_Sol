class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        vector<int>ans(8);
        vector<vector<int>>res;
        while(n-->0)
        {
            for(int i=1;i<7;i++)
            {
                ans[i]=cells[i-1]==cells[i+1];
            }
            if(res.size() && res.front()==ans)
                return res[n%res.size()];
            else
                res.push_back(ans);
            cells=ans;
        }
        return cells;
    }
};