class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<pair<int,int>, int> rows;
        unordered_map<pair<int,int>, int> cols;
        unordered_map<pair<int,int>, int> boxes;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;
                if(rows[{i, board[i][j]}] == 1 or cols[{j, board[i][j]}] == 1 
                    or boxes[{(i/3)*3 + j/3, board[i][j]}] == 1)
                        return false;
                rows[{i, board[i][j]}] = 1;
                cols[{j, board[i][j]}] = 1;
                boxes[{(i/3)*3 + j/3, board[i][j]}] = 1;
            }
        }
        return true;
    }
};
