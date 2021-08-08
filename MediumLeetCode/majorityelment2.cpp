class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int nums1=0,nums2=1,count1=0,count2=0;
        for(auto i: nums)
        {
            if(nums1==i)
                count1++;
           else if(nums2==i)
                count2++;
            else if(count1==0)
            {
                nums1=i;
                count1=1;
            }
            else if(count2==0)
            {
                nums2=i;
                count2=1;
            }  
            else{
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(auto i:nums)
        {
            if(nums1==i)count1++;
            else if(nums2==i)count2++;
        }
        if(count1>nums.size()/3)res.push_back(nums1);
        if(count2>nums.size()/3)res.push_back(nums2);
        return res;
        
    }
};