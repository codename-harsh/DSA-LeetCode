class Solution {
public:
    string lastNonEmptyString(string s) {
        vector<int> f(26), last(26);
        int maxi = 0;
        for(int i = 0; i < s.size(); ++i) {
            f[s[i] - 'a']++;
            last[s[i] - 'a'] = i;
            maxi = max(maxi, f[s[i] - 'a']);
        }
        string ans;
        for(int i = 0; i < s.length(); ++i) {
            if(f[s[i] - 'a'] == maxi && last[s[i] - 'a'] == i)
                    ans += s[i];
        }
        return ans;
    }
};