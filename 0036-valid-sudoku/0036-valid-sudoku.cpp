class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<multiset<int>> rows(9), columns(9), boxes(9);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char ch = board[i][j];
                if (ch == '.')
                    continue;
                int a = (i / 3) * 3 + (j / 3);
                if (rows[i].count(ch) > 0 || columns[j].count(ch) > 0 ||
                    boxes[a].count(ch) > 0)
                    return false;

                rows[i].insert(ch);
                columns[j].insert(ch);
                boxes[a].insert(ch);
            }
        }
        return true;
    }
};