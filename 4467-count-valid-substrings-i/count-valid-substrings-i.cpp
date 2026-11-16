class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0, last = -1;
        for (int i = 0; i < s.size(); ++i) {
            if (i >= 2 && s.compare(i - 2, 3, "abc") == 0)
                last = i - 2;
            ans += i - last;
        }
        return ans;
    }
};