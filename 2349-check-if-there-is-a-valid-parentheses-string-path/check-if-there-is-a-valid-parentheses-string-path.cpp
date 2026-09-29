class Solution {
public:
    int n, m;
    set<tuple<int,int,int>> bad;

    bool solve(int i, int j, int bal, vector<vector<char>>& g) {
        if (bal < 0) return false;

        int rem = (n - 1 - i) + (m - 1 - j);

        if (bal > rem) return false;

        if (i == n - 1 && j == m - 1)
            return bal == 0;

        if (bad.count({i, j, bal}))
            return false;

        if (i + 1 < n) {
            int nb = bal + (g[i + 1][j] == '(' ? 1 : -1);
            if (solve(i + 1, j, nb, g))
                return true;
        }

        if (j + 1 < m) {
            int nb = bal + (g[i][j + 1] == '(' ? 1 : -1);
            if (solve(i, j + 1, nb, g))
                return true;
        }

        bad.insert({i, j, bal});
        return false;
    }

    bool hasValidPath(vector<vector<char>>& g) {
        n = g.size();
        m = g[0].size();

        if ((n + m - 1) % 2) return false;
        if (g[0][0] == ')') return false;
        if (g[n - 1][m - 1] == '(') return false;

        bad.clear();

        return solve(0, 0, 1, g);
    }
};