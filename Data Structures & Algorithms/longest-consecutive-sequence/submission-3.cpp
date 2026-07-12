class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashSet(nums.begin(), nums.end());
        int longest = 0;

        for (auto x : hashSet){
            if (hashSet.find(x - 1) == hashSet.end()){
                int length = 1;
                while (hashSet.find(x + length) != hashSet.end()) length++;
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
