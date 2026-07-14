class Solution {
public:
    bool isValid(string s) {
        while (true) {
            size_t pos;
            string old = s;
            while((pos = s.find("()")) != string::npos){
                s.erase(pos, 2);
            }

            while((pos = s.find("[]")) != string::npos){
                s.erase(pos, 2);
            }

            while((pos = s.find("{}")) != string::npos){
                s.erase(pos, 2);
            }

            if(s == old) break;
        }
        return s.empty();
    }
};
