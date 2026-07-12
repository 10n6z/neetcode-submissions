class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, cnt = 0, idx = 0;
        vector<int> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                cnt++;
                idx = i;
                continue;
            }           
            prod *= nums[i];
        }
        if (cnt >= 2) return ans;
        if (cnt == 1){
            ans[idx] = prod;
            return ans;
        }
        for (int i = 0; i < nums.size(); i++){
            ans[i] = prod/nums[i];
        }
        return ans;
    }
};
