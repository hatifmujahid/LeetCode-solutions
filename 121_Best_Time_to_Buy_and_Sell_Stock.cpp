class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = 999999999;
        for(int i=0;i<prices.size();i++){
            min_price = min(prices[i], min_price);
            max_profit = max(max_profit,prices[i]-min_price);
        }
        return max_profit;

    }
};
