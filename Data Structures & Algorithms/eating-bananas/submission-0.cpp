class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = INT_MAX, l = 1, r = *std::max_element(piles.begin(), piles.end());
        while (l <= r) {
            int mid = (r + l) / 2;
            int hour = 0;
            for (int i = 0; i < piles.size(); i++) {
                hour += (piles[i] + mid - 1) / mid;
            } 
            if (hour <= h) {
                ans = min(ans, mid);
                r = mid - 1;
            } else l = mid + 1;
        }
        return ans;
    }
};
