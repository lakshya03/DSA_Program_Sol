class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buystock=prices[0];
        
        int sellstock=0;
        
        for(int i=0;i<prices.size();i++)
        {
            buystock=min(buystock,prices[i]);
            sellstock=max(sellstock,prices[i]-buystock);
        }
        return sellstock;
    }
};