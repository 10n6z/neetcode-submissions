class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m - 1, row = 0;
        while (l <= r) {
            int mid = (r + l) / 2;
            if (matrix[mid][0] > target) r = mid - 1;
            else if (matrix[mid][n - 1] < target) l = mid + 1;
            else {
                row = mid;
                break;
            }
        }
        cout << row << endl;
        l = 0, r = n - 1;
        while (l <= r) {
            int mid = (r + l) / 2;
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};
