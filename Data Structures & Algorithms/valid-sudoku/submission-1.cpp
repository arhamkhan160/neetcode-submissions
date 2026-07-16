class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int i = 0; i < 9; i++) {
            unordered_map<char, bool> row;
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') continue;

                if (row[board[i][j]]) {
                    return false;
                }

                row[board[i][j]] = true;
            }
        }

        // Check columns
        for (int i = 0; i < 9; i++) {
            unordered_map<char, bool> col;
            for (int j = 0; j < 9; j++) {

                if (board[j][i] == '.') continue;

                if (col[board[j][i]]) {
                    return false;
                }

                col[board[j][i]] = true;
            }
        }

        // Check 3x3 boxes
        for (int blockRow = 0; blockRow < 3; blockRow++) {
            for (int blockCol = 0; blockCol < 3; blockCol++) {

                unordered_map<char, bool> box;

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {

                        char ch = board[blockRow * 3 + i][blockCol * 3 + j];

                        if (ch == '.') continue;

                        if (box[ch]) {
                            return false;
                        }

                        box[ch] = true;
                    }
                }
            }
        }

        return true;
    }
};