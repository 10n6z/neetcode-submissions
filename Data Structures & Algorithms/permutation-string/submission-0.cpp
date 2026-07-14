class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> cnt1, cnt2;
        for (int i = 0; i < s1.size(); i++) {
            cnt1[s1[i]]++;
        }
        for (int i = 0; i < s2.size(); i++) {
            if (!cnt1.count(s2[i])) continue;
            cnt2[s2[i]]++;
        }
        if (cnt1 == cnt2) return true;
        return false;
    }
};
