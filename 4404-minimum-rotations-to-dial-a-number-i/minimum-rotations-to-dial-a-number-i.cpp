class Solution {
public:
    int minRotations(string s) {
        int p = 0, ans = 0;
        for(const auto& x: s) {
            int t = x - '0';
            int mini = min(p, t), maxi = max(p, t);
            ans += min(maxi - mini, mini + 10 - maxi);
            p = t;
        }
        return ans;
    }
};