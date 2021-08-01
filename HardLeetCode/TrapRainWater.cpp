class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
  int leftMax=0,rightMax=0;
        int  a=0,b=n-1;
        int res=0;
        while(a<=b)
        {
            leftMax=max(arr[a],leftMax);
            rightMax=max(arr[b],rightMax);
            if(leftMax<rightMax)
            {
                res+=leftMax-arr[a];
                a++;
            }
            else
            {
                res+=rightMax-arr[b];
        
            b--;
            }
        }
      return res;  
    }
};