class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";
        unordered_map<int, int> cnt1, cnt2;
        for (int i = 0; i < t.size(); i++) {
            cnt1[t[i] - 'A']++;
        }
        string res = "";
        int resLen = INT_MAX;
        for (int i = 0; i < s.size(); i++) {
            cnt2.clear();
            for (int j = i; j < s.size(); j++) {
                cnt2[s[j] - 'A']++;
                bool flag = true;
                for (auto& [ch, cnt] : cnt1) {
                    if (cnt2[ch] < cnt) {
                        flag = false;
                        break;
                    }
                }
                if (flag and j - i + 1 < resLen) {
                    resLen = j - i + 1;
                    res = s.substr(i, resLen);
                }
            }
        }
        return res;
    }
};
