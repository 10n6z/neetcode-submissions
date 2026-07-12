class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (auto num : nums) freq[num]++;
        vector<vector<int>> m (nums.size() + 1);
        vector<int> ans;
        for (auto x : freq) {
            m[x.second].push_back(x.first);
        }
        for (int i = m.size() - 1; i >= 0; i--) {
            for (auto val : m[i]){
                if (k == 0) break;
                ans.push_back(val);
                k--;
            }
        }
        return ans;
    }
};
