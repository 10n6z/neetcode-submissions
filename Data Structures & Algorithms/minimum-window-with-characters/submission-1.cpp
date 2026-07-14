class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";
        unordered_map<int, int> cnt1, cnt2;
        int have = 0, need = 0, l = 0;
        for (int i = 0; i < t.size(); i++) {
            cnt1[t[i] - 'A']++;
        }
        string res = "";
        int resLen = INT_MAX;
        need = cnt1.size();
        for (int r = 0; r < s.size(); r++) {
            cnt2[s[r] - 'A']++;
            if (cnt1.count(s[r] - 'A') and cnt1[s[r] - 'A'] == cnt2[s[r] - 'A']) have++;
            while (have == need) {
                if ((r - l + 1) < resLen) {
                    resLen = r - l + 1;
                    res = s.substr(l, resLen);
                }

                cnt2[s[l] - 'A']--;
                if (cnt1.count(s[l] - 'A') and cnt2[s[l] - 'A'] < cnt1[s[l] - 'A']) have--;
                l++;
            }
        }
        return res;
    }
};
