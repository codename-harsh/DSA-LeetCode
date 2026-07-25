class Solution {
public:
    unordered_map<int, bool> rowcheck;
    unordered_map<int, bool> uldcheck;
    unordered_map<int, bool> bldcheck;

    void storesol(vector<vector<char>>& board, int n, vector<vector<string>>& ans) {
        vector<string> temp;
        for(int i = 0; i < n; i++) {
            string op = "";
            for(int j = 0; j < n; j++) {
                op.push_back(board[i][j]);
            }
            temp.push_back(op);
        }
        ans.push_back(temp);
    }

    bool isSafe(int row, int col, vector<vector<char>>& board, int n) {
        if(rowcheck[row] == true){
            return false;
        }
        if(uldcheck[n+1+col-row] == true){
            return false;
        }
        if(bldcheck[row+col] == true){
            return false;
        }
        // Not a single case worked which means now we can place the queen in the given posn so return true
        return true;
    }


    void solve(vector<vector<char>>& board, int col, int n, vector<vector<string>>& ans) {
//base case
        if(col >= n){
            storesol(board, n, ans);
            return;
        }
            //  1 case solve, other will be handled by recursion 
            
            for(int row = 0; row < n; row++) {
            if(isSafe(row, col, board, n)) {
            // rakh do 
            board[row][col] = 'Q';
            //opt
            rowcheck[row] = true;
            uldcheck[n+1+col-row] =  true;
            bldcheck[row+col] = true;

            // recursion soln 
            solve(board, col + 1, n, ans);
            // Og backtacking
            board[row][col] = '.';
            //opt
            rowcheck[row] = false;
            uldcheck[n+1+col-row] =  false;
            bldcheck[row+col] = false;
            
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
    vector<vector<char>> board(n, vector<char>(n, '.'));
    vector<vector<string>> ans;
    int col = 0;
    solve(board, col, n, ans);
    return ans;
    }
};