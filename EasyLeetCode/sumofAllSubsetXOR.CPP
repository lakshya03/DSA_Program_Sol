class Solution {
public:
    int res=0;
    int subsetXORSum(vector<int>& nums) {
        
        subRes(nums,0,0);
        return res;
    }
    void subRes(vector<int>& nums, int pos, int currVal)
    {
        if(pos==nums.size())
        {
            res+=currVal;
            return;
        }
        subRes(nums,pos+1,currVal);
        subRes(nums,pos+1,currVal^nums[pos]);
    }
    
};