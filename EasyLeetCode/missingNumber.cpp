class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int sum=1^nums[0];
        for(int i=1;i<nums.size();i++)
            sum=sum^(i+1)^nums[i];
        return sum;
        
    }
};