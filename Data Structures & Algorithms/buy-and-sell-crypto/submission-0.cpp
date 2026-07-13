class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, profit = 0, r = prices.size() - 1;
        while (l < r) {
            l++;
            profit = max(prices[r] - prices[l], profit);
            r--;
            profit = max(prices[r] - prices[l], profit);
        }
        return profit;
    }
};
