class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = prices.size() - 1;
        int profit = prices[r] - prices[l];
        while (l < r) {
            l++;
            profit = max(prices[r] - prices[l], profit);
            r--;
            profit = max(prices[r] - prices[l], profit);
        }
        return profit;
    }
};
