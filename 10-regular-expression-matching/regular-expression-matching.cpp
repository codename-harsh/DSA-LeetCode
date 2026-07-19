class Solution {
public:

    bool solve(int i, int j, string& s, string& p, vector<vector<int>>& ans) {
        int n = s.size(), m = p.size();
        if(j == m) {
            return (i == n);
        }
        if(ans[i][j] != -1) return ans[i][j];
        bool nxt = false; // next star*
        if(j + 1 < m && p[j + 1] == '*') {
            nxt = true;
        }
        if(nxt) {
            bool a = false, b = false;
            if(i < n && (s[i] == p[j] || p[j] =='.'))
                a = solve(i + 1, j, s, p, ans);
                b = solve(i, j + 2, s, p, ans);
                    return ans[i][j] = (a || b);
        } else {
            if(i < n && (s[i] == p[j] || p[j] == '.'))
                return ans[i][j] = solve(i + 1, j + 1, s, p, ans);
        }
        return ans[i][j] = false;
    }

    bool isMatch(string s, string p) {
        vector<vector<int>>ans (s.size() + 1, vector<int> (p.size() + 1, - 1));
        return solve(0, 0, s, p, ans);
    }
};