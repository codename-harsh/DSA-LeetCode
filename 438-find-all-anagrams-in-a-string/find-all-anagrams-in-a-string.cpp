class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<int> freq(26, 0), window(26, 0), ans;
        int i, k = n - 1;
        if (n > m) {
            return {};
        }
        for (i = 0; i < n; i++) {
            freq[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }
        if (freq == window) {
            ans.push_back(0);
        }
        for (int i = n; i < m; i++) {
            window[s[i] - 'a']++;
            window[s[i - n] - 'a']--;
            if (freq == window) {
                ans.push_back(i - n + 1);
            }
        }
        return ans;
    }
};