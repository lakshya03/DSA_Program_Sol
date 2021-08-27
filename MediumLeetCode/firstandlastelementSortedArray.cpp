class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2,-1);
      if(nums.size()==0)
          return res;
    int start=0;
        int end= nums.size()-1;
        while(start<end)
        {
            int mid=(start+end)/2;
            if(nums[mid]<target)
                start=mid+1;
            else
                end=mid;
        }
        if(nums[start]!=target) return res;
        else 
            res[0]=start;
        end=nums.size()-1;
        while(start<end)
        {
            int mid=(start+end)/2+1;
            if(nums[mid]>target)
                end=mid-1;
            else
                start=mid;
        }
        res[1]=end;
        return res;
        
    }
};