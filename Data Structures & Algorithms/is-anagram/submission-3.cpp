class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt[30];
        if (s.size() > t.size()) {
            swap(s, t);
        }
        for (int i = 0; i < s.size(); i++) {
            cnt[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size(); i++) {
            if(cnt[t[i] - 'a'] == 0) return false;
            cnt[t[i] - 'a']--;
        }
        return true;
    }
};
