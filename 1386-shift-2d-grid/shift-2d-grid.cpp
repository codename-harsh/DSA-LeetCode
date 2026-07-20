class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size(); // m -> row, n -> cols
        for(int step = 0; step < k; step++) {
            int last = grid[m-1][n-1]; // storn' last element
            for(int i = m-1; i >= 0; i--) {
                for(int j = n-1; j >= 0; j--) {
                    if(j == 0) {
                        if(i > 0) grid[i][j] = grid[i-1][n-1];
                        else grid[i][j] = last; // first cell gets last element
                    } else {
                        grid[i][j] = grid[i][j-1];
                    }
                }
            }
        }
        return grid;
    }
};
