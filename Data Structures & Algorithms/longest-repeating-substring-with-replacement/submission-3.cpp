class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest = 1, length = 1, cnt = k, consider = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            cnt = 1;
            for (int j = i + 1; j < s.size(); j++) {
                mp[s[j]]++;
                cnt = max(cnt, mp[s[j]]);
                int replacements = (j - i + 1) - cnt;
                if (replacements <= k) longest = max(longest, j - i + 1);
            }
            mp.clear();
        }
        return longest;
    }
};
