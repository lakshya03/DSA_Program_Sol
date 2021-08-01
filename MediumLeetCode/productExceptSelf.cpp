class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
  vector<int>LS(n,0);
  vector<int>RS(n,0);
  LS[0]=1;
  RS[0]=1;
  for(int i=1;i<nums.size();i++)
  {
    LS[i]=LS[i-1]*nums[i-1];
    RS[i]=RS[i-1]*nums[n-i];
  }
  for(int i=0;i<nums.size();i++)
  {
    nums[i]=LS[i]*RS[n-i-1];
  }
        return nums;
    }
};