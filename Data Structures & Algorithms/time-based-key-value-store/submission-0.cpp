class TimeMap {
public:
    unordered_map<string, vector<pair<string, int>>> mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        int l = 0, r = mp[key].size() - 1;
        string ans = "";
        while (l <= r) {
            int mid = (r + l) / 2;
            if (mp[key][mid].second == timestamp) return mp[key][mid].first;
            else if (mp[key][mid].second < timestamp) {
                ans = mp[key][mid].first;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return ans;
    }
};
