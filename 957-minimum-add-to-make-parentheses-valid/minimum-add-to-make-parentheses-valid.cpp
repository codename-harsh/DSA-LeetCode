class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0, a = 0;
        for (const auto&c: s) {
            if (c == '(') {
                ++open;
            } else if (open > 0) {
                --open;
            } else {
                ++a;
            }
        }
        return a + open;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }
};