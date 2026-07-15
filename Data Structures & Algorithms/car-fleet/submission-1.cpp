class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        size_t n = position.size();
        stack<double> st;
        vector<pair<int, int>> cars;
        for (int i = 0; i < n; i++) cars.push_back({position[i], speed[i]});
        sort(cars.rbegin(), cars.rend());
        for (const auto& [pos, spd] : cars) {
            if (!st.empty() and ((target - pos) / double(spd)) <= st.top()) continue;
            st.push(((target - pos) / double(spd)));
        }
        return st.size();
    }
};
