class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars;
        cars.reserve(n);
        for (int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());
        int fleets = 0;
        double slowestTime = 0.0;
        for (const auto& [pos, spd] : cars) {
            double time = static_cast<double>(target - pos) / spd;
            if (time > slowestTime) {
                fleets++;
                slowestTime = time;
            }
        }
        return fleets;
    }
};