class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> g(m, string(n, '#'));
        g[0] = string(n, '.');
        for(int i = 0; i < m; ++i) {
            g[i][n - 1] = '.';
        }
        return g;
    }
};
/* why it is unique path ?
    First row ke alawa kisi roq mein last col se pehle koi free cell na hai.
    isliye neeche jane ka doosra rasta hi nahi bachta !
*/