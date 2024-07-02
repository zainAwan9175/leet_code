class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int by=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<by)
            {
                by=prices[i];
            }else  if(prices[i]-by>profit)
            {
                profit=prices[i]-by;
            }

        }
      
    return profit;
    

    }
    
};