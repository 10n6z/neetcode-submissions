class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest = 1, length = 1, cnt = 0, l = 0;
        unordered_map<char, int> mp;
        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            cnt = max(cnt, mp[s[r]]);    
            while ((r - l + 1) - cnt > k) {
                mp[s[l]]--;
                l++;
            }
            longest = max(longest, r - l + 1);
            cout << longest << endl;
        }
        return longest;
    }
};
