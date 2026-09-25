class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size(), l = 0, pri = 0, ln = 0;
        for (int i = 0; i < n; i++) {
            pri += abs(s[i] - t[i]);
                while (pri > maxCost) {
                pri -= abs(s[l] - t[l]), l++;
                }
            ln = max(ln, i - l + 1);
        }
        return ln;
    }
};