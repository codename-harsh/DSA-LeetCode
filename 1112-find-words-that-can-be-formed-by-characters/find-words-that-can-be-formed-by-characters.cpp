class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> f(26);
        int ans = 0;
        for(char &c : chars) {
            f[c - 'a']++;
        }
        for(string &x : words) {
            vector<int> c(26);
            for(char ch : x) {
                c[ch - 'a']++;
            }
            bool ok = true;
            for(int i = 0; i < 26; ++i) {
                if(c[i] > f[i]) {
                    ok = false;
                    break;
                }
            }
            if(ok) ans += x.size();
        }
        return ans;
    }
};