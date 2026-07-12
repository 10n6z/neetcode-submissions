class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for (auto str : strs) {
            ans += to_string(str.size()) + "_" + str;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int i = 0;
        while (i < s.size()){
            size_t found = s.find('_', i);
            if (found != string::npos) {
                int length = stoi(s.substr(i, found - i));
                ans.push_back(s.substr(found + 1, length));
                i = found + 1 + length;
            }
        }
        return ans;
    }
};
