class Solution {
public:
    vector<string> createGrid(int m, int n, int k) {
        vector<string> g(m, string(n, '#'));//Created a vector containing # only .
        //now we need to fill up the dots to make exactly K paths  :(
        for(int i = 0; i < m; ++i)  g[i][n - 1] = '.';
        g[0] = string(n, '.');
        if(k >= 2) {
            if(m < 2 || n < 2)  return {};
            g[1][n - 2] = '.';
        }
        if(k >= 3) {
            if(m >= 3 && m >= n)    g[2][n-2] = '.';
            else if(n >= 3 and n > m)   g[1][n-3] = '.';
            else return {};
        }
        if(k == 4) {
            if(m >= 4 && m >= n) g[3][n-2] = '.';
            else if(n >=4 && n > m) g[1][n-4] = '.';
            else if(m == 3 && n == 3) return {"..#", "...", "#.."};
            else return {};
        }
        return g;
    }
};