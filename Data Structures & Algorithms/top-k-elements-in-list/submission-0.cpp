class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        multimap<int,int, std::greater<int>> m;
        vector<int> ans;
        for (auto num : nums) freq[num]++;
        for (auto x : freq) {
            m.insert({x.second, x.first});
        }
        for (auto x : m) {
            if(k == 0) break;
            ans.push_back(x.second);
            k--;
        }
        return ans;
    }
};
