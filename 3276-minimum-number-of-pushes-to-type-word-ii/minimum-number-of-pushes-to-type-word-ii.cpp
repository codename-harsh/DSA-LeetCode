class Solution {
public:
    int minimumPushes(string word) {
        vector<int>f(26, 0);
        for(auto x: word)
            f[x - 'a']++;
        sort(f.begin(), f.end());
        int ans = 0;
        for(int i = 25, j =0; i >= 0; i--) {
            int c = 25 - i;
            if(c % 8 == 0)
                j++;

            ans += f[i] * j;
        }
        return ans;
    }
};