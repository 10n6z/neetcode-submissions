class Solution {
public:
    bool isPalindrome(string s) {
        int j = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' and s[i] <= 'Z') {
                s[j] = s[i] - 'A' + 'a';
                j++;
            }
            else if(s[i] >= 'a' and s[i] <= 'z'){
                s[j] = s[i];
                j++;
            }
        }
        s = s.substr(0, j);
        for (int i = 0; i < s.size() / 2; i++){
            if(s[i] != s[s.size() - 1 - i]) return false;
        }
        return true;
    }
};
