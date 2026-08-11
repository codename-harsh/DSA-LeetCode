class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = s.size();
        if(n == 0) 
            return 0;
            int ans = 0;
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        int cooky = n - 1;
        int childy = g.size() - 1;
        while(cooky >= 0 && childy >= 0 ) {
            if(s[cooky] >= g[childy]) {
                ans++;
                cooky--, childy--;
            } else
                    childy--;
        }
            return ans;
    }
};