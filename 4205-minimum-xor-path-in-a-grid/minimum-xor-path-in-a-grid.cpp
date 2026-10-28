class Solution {
public:
    int ans = INT_MAX;
    vector<vector<vector<bool>>> vis;

    void solve(vector<vector<int>>& grid, int i, int j, int x) {
        int m = grid.size(), n = grid[0].size();
        x ^= grid[i][j];
        if (vis[i][j][x])
            return;
        vis[i][j][x] = true;
        if (i == m - 1 && j == n - 1) {
            ans = min(ans, x);
            return;
        }
        if (i + 1 < m)
            solve(grid, i + 1, j, x);
        if (j + 1 < n)
            solve(grid, i, j + 1, x);
    }

    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vis.assign(m, vector<vector<bool>>(n, vector<bool>(1024, false)));
        solve(grid, 0, 0, 0);
        return ans;
    }
};