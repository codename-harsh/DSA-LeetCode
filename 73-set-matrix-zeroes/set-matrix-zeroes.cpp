class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> r(m, 0), c(n, 0);
        // Marking those rows and cols
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (matrix[i][j] == 0)
                    r[i] = 1, c[j] = 1;
        // setting em zeroz
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (r[i] || c[j])
                    matrix[i][j] = 0;
    }
};