class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        for(int i=0;i<prices.size()-1;i++)

        {
            if(money-(prices[i]+prices[i+1])>=0)
            {
                return (money-(prices[i]+prices[i+1]));
            }
        }
        return money;
        
    }
};