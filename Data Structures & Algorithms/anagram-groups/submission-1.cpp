class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;
        for (const auto& str : strs) {
            vector<int> cnt(26, 0);
            for (char c : str) {
                cnt[c - 'a']++;
            }
            string key = to_string(cnt[0]);
            for (int i = 1; i < 26; i++) {
                key += '#' + to_string(cnt[i]);
            }
            m[key].push_back(str);
        }
        for (const auto& x : m) {
            ans.push_back(x.second);
        }
        return ans;
    }
};
