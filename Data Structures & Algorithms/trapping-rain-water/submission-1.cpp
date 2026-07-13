class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        for (int i = 0; i < height.size(); i++) {
            int l = i, r = i;
            int heightl = height[i], heightr = height[i];
            while (l > 0){
                l--;
                heightl = max(height[l], heightl);
            }
            while (r < height.size() - 1){
                r++;
                heightr = max(height[r], heightr);
            }
            ans += min(heightr, heightl) - height[i];
        }
        return ans;
    }
};
