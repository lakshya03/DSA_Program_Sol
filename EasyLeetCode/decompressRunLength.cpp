class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> output;int freq =0;
        for(int i=0; i<nums.size()-1;i=i+2)
        {
            freq = nums[i];
            while(freq>0)
            {
                output.push_back(nums[i+1]);
                freq--;
            }
        }
        return output;
    
    }
};