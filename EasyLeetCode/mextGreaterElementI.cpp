class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>mp;
        vector<int>res;
        for(auto i : nums2)
        {
            while(s.size() && s.top()<i)
            {
                mp[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        for(auto i:nums1)
        {
            mp.count(i)?res.push_back(mp[i]):res.push_back(-1);
        }
        return res;
    }
};