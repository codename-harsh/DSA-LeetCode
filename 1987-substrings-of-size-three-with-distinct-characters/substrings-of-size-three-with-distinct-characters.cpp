class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;
        for(int i = 0; i + 2 < s.size(); i++) {
            int a = s[i], b = s[i+1], c = s[i + 2];
            if(a != b && a != c && b != c)      ans++;
        }
        return ans;
    }
};
