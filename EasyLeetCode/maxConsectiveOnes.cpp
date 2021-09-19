class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount=0, count=0;
        for(auto i :nums)
        {
            if(i==1)
                maxCount=max(maxCount,++count);
            else
                count=0;
        }
        return maxCount;
    }
};