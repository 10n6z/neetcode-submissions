class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        vector<int> sell (prices.size());
        sell[prices.size() - 1] = prices[prices.size() - 1];
        for (int i = prices.size() - 2; i > 0; i--){
            sell[i] = max(sell[i + 1], prices[i]);
        }
        for (int i = 0; i < prices.size() - 1; i++){
            profit = max(profit, sell[i] - prices[i]);
            cout << profit << endl;
        }
        return profit;
    }
};
