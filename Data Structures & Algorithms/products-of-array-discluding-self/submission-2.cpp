class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        size_t sz = nums.size();
        vector<int> ans;
        vector <int> sufix(sz);
        vector <int> prefix(sz);
        prefix[0] = 1;
        for (int i = 1; i < sz; i++){
            prefix[i] = nums[i-1]*prefix[i-1]; 
        } 
        sufix[sz-1] = 1;
        for (int i = sz - 2; i >= 0; i--){
            sufix[i] = nums[i+1]*sufix[i+1]; 
        } 
        for (int i = 0; i < sz; i++){
            ans.push_back(prefix[i] * sufix[i]);
        }
        return ans;
    }
};
