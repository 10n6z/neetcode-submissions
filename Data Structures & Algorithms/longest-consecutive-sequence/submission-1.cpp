class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int ans = 1, tmp = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) continue;
            if (nums[i] == nums[i + 1] - 1) {
                tmp++;
                ans = max(ans, tmp);
            } else tmp = 1;
        }
        return ans;
    }
};
