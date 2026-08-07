class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r = board.size(), c = board[0].size();
        int total = r * c - 1;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(board[i][j] == '.')
                    continue;
                //row check
                for(int k = 0; k < 9; k++) {
                    if(k != j && board[i][k] == board[i][j])
                        return false;

                }
                //col check
                for(int k = 0; k < 9; k++) {
                    if(k != i && board[k][j] == board[i][j])
                        return false;
                }
                //diag check || 3X3 diagonal check 
                int sr = (i / 3) * 3, sc = (j / 3) * 3;
                for(int x = sr; x < sr + 3; x++) {
                    for(int y = sc; y < sc + 3; y++) {
                        if((x != i || y != j) && board[x][y] == board[i][j])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};