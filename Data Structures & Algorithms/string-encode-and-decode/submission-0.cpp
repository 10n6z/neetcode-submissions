class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for (auto str : strs) {
            ans += str + "_";
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string tmp = "";
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == '_') {
                ans.push_back(tmp);
                tmp = "";
                continue;
            }
            tmp += s[i];
        }
        return ans;
    }
};
