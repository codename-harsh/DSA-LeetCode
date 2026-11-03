class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        vector<int> r(m), c(n);
        for(int i = 0; i < m; ++i) 
            for(int j = 0; j < n; ++j) 
                if(grid[i][j]) 
                    r[i]++, c[j]++;
        for(int i = 0; i< m; ++i)
            for(int j = 0; j < n; ++j)
                if(grid[i][j] && (r[i] > 1 || c[j] >  1))
                    ++ans;
        return ans;
    }
};