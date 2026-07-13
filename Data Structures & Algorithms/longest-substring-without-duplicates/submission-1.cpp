class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0, length = 0, start = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++) {
            if(mp.count(s[i])) {
                length -= (mp[s[i]] - start + 1);
                start = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            length++;
            longest = max(length, longest);
        }
        return longest;
    }
};
