class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        std::vector<std::unordered_set<char>> row_sets(9);
        std::vector<std::unordered_set<char>> col_sets(9);
        std::vector<std::unordered_set<char>> box_sets(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val == '.') {
                    continue; 
                }
                int box_index = (i / 3) * 3 + (j / 3);
                if (row_sets[i].count(val) || col_sets[j].count(val) || box_sets[box_index].count(val)) {
                    return false; 
                }

                row_sets[i].insert(val);
                col_sets[j].insert(val);
                box_sets[box_index].insert(val);
            }
        }
        return true;
    }
};
