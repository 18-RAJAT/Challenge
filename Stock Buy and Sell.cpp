class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minimumPrice=INT_MAX;
      int profit=0;
        
        for(int i=0;i<prices.size();++i)
        {
            minimumPrice=min<int>(prices[i],minimumPrice);
            profit=max<int>(profit,prices[i]- minimumPrice);
        }
        return profit;
    }
};