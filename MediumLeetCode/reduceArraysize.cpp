class Solution {
public:
    int minSetSize(vector<int>& arr) {
       unordered_map<int,int>mp;
        priority_queue<int>q;
        for(auto a:arr)
            mp[a]++;
        for(auto i:mp)
            q.push(i.second);
        int remove=0;
        int res=0;
        while(remove<arr.size()/2)
        {
            remove+=q.top();
            q.pop();
            res++;    
        }
        return res;
    }
};