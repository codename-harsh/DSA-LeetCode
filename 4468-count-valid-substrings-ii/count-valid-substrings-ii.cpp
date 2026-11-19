class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        long long ans = 0;
        int na = -1, nb = -1, nc = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a')
                na = i;
            else if (s[i] == 'b' && na != -1)
                nb = max(nb, na);
            else if (s[i] == 'c' && nb != -1)
                nc = max(nc, nb);
            ans += (i - nc);
        }
        return ans;
    }
};