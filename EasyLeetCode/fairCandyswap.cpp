class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int>res;
        int sumA = 0;
    int sumB = 0;
    
    for (auto i : aliceSizes)
        sumA += i;
    
    for (auto i : bobSizes)
        sumB += i;
    
    int diff = (sumA - sumB) / 2;
    
    set<int> searchA;
    for (auto i : aliceSizes)
    {
        
        searchA.insert(i);
    }
   
    for (auto i : bobSizes)    
    {
      
        if (searchA.count(diff + i) > 0)
        {
           res.push_back(diff+i);
            res.push_back(i);
            break;
            
        }
    }
    
    return res;
    }
};
