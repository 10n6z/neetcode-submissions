class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size()) return false;
        vector<int> cnt1(26, 0), cnt2(26, 0);
        for (int i = 0; i < s1.size(); i++) {
            cnt1[s1[i] - 'a']++;
            cnt2[s2[i] - 'a']++;
        }
        int l = 0;
        for (int r = s1.size(); r < s2.size(); r++) {
            bool flag = true;
            for (int i = 0; i < 26; i++) {
                cout << i << endl;
                if(cnt1[i] != cnt2[i]) {
                    flag = false;
                    break;
                }
            }
            if (flag) return true;
            cnt2[s2[l] - 'a']--;
            cnt2[s2[r] - 'a']++;
            l++;
            cout << s2[l] << endl;
        }
        return false;
    }
};
