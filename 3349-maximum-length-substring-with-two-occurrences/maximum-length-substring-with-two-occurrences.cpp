class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l = 0, ans = 0;
        vector<int>f(1000, 0);
        for(int i =0; i < s.size(); i++) {
            f[s[i]]++;
            while(f[s[i]] > 2){
                f[s[l]]--;
                l++;
            }
            ans = max(ans, i - l + 1);
        }
        return ans;
    }
};