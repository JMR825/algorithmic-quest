#include<numeric>
#include<algorithm>

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) 
    {
        double final_price;
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        final_price=accumulate(prices.begin(),prices.end(),0.0);
        double total_discount=0.0;
        double limit=min(prices.size(),discounts.size());
        for(size_t i=0;i<limit;i++)
            {
            total_discount+=(prices[i]*discounts[i])/100.0;
            }
        return final_price-total_discount;
    }
};
