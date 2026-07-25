class Solution {
public:
    int maxProduct(int n) {
        int ans = 1;
        string s = to_string(n);
        sort(s.begin(), s.end());
        ans *= (s.back() - '0');
        s.pop_back();
        ans *= (s.back() - '0');
        return ans;
    }
};