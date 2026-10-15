class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        bool f[4] = {true, true, true, true};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (target[i][j] != mat[i][j])
                    f[0] = false;
                if (target[i][j] != mat[n - j - 1][i])
                    f[1] = false;
                if (target[i][j] != mat[n - i - 1][n - j - 1])
                    f[2] = false;
                if (target[i][j] != mat[j][n - i - 1])
                    f[3] = false;
            }
        }
        return f[0] || f[1] || f[2] || f[3];
    }
};