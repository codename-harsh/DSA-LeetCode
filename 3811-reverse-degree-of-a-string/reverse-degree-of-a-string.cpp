class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i = 0; i < s.length(); ++i) {
            int o = s[i] - 'a';
            ans += (i + 1) * (26 - o);
        }
        return ans;
    }
};