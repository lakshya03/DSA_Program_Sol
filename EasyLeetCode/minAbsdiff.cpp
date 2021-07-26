class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>res;
        
        int min_diff=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
            min_diff=min(arr[i+1]-arr[i],min_diff);
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==min_diff)
            {
                vector<int>ans;
                ans.push_back(arr[i]);
                ans.push_back(arr[i+1]);
                res.push_back(ans);
            }
        }
        return res;
    }
};