class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxres=0;
        for(int i=prices.size()-1;i>0;i--)
        {
           if(prices[i]-prices[i-1]>0)
               maxres=maxres+(prices[i]-prices[i-1]);
        }
        return maxres;
    }
};