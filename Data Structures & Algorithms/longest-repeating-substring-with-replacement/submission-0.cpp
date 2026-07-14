class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest = 1, length = 1, cnt = k, consider = 0;
        unordered_map<char, int> mp;
        mp[s[0]]++;
        for (int i = 1; i < s.size(); i++) {
            if (s[consider] != s[i]) {
                if (k == 0) {
                    int tmp = consider;
                    while (s[tmp] == s[consider]) {
                        consider++;
                        mp[s[consider]]--;
                        k++;
                    }
                }
                else k--;
            }
            mp[s[i]]++;
            longest = max(longest, i - consider + 1);
        }
        return longest;
    }
};
