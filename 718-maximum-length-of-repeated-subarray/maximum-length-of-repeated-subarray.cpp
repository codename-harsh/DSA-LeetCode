class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        int n = a.size(), m = b.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            int c = 0;
            for(int j = 0; i + j < n && j < m; j++) {
                if(a[i + j] == b[j]) c++;
                else c = 0;
                ans = max(ans, c);
            }
        }
        for(int j = 1; j < m; j++) {
            int c = 0;
            for(int i = 0; i + j < m && i < n; i++) {
                if(a[i] == b[i + j]) c++;
                else c = 0;
                ans = max(ans, c);
            }
        }
        return ans;
    }
};