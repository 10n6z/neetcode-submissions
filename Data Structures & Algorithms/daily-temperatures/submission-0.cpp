class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> ans (temperatures.size());
        st.push({temperatures[0], 0});
        for (int i = 1; i < temperatures.size(); i++) {
            while(!st.empty() and temperatures[i] > st.top().first) {
                ans[st.top().second] = i - st.top().second;
                st.pop();
            }  
            st.push({temperatures[i], i});
        }
        while (!st.empty()) {
            ans[st.top().second] = 0;
            st.pop();
        }
        return ans;
    }
};
