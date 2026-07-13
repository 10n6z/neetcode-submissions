class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0, length = 0;
        unordered_map<char, int> mp;
        for (auto ch : s) {
            if (mp.count(ch)) {
                mp.clear();
                length = 1;
                mp[ch]++;
            } else length++;
            mp[ch]++;
            longest = max(length, longest);
        }
        return longest;
    }
};
