class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        vector<int> l(height.size()), r(height.size());
        l[0] = height[0];
        r[height.size() - 1] = height[height.size() - 1];

        for (int i = 1; i < height.size(); i++) {
            l[i] = max(l[i-1], height[i]);
        }

        for (int i = height.size() - 2; i >= 0; i--) {
            r[i] = max(r[i+1], height[i]);
        }

        for (int i = 0; i < height.size(); i++) {
            ans += min(l[i], r[i]) - height[i];
        }
        return ans;
    }
};
