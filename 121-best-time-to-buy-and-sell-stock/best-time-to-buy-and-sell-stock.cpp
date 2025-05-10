class Solution {
public:
    int maxProfit(vector<int>& prices) {
int l=0;
int r=1;
int max_profit=0;
while(r<prices.size())
{
    if(prices[r]>prices[l])
    {
        int profit=prices[r]-prices[l];
         max_profit=max(profit,max_profit);

    }
    else{
        l=r;
    }
    r++;
}
return max_profit;
    }
    
};