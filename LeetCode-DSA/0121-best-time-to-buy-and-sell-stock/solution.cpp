class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit=0;
        int max_profit=0;
        int min_price=INT_MAX;
        ;
        for(int i=0;i<prices.size();i++)
        {
            //min_profit, max_profit, profit
            if(prices[i]<min_price)
                min_price=prices[i];
            profit=prices[i]-min_price;
            if(profit>max_profit )
            {
                max_profit=profit;
            }
        }
        if(max_profit>0) return max_profit;
        return 0;
        
    }
};
