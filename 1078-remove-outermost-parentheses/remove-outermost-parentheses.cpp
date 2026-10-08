class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int lvl = 0;
        for (auto& c : s)
            if ((c == '(' && lvl++) || (c == ')' && --lvl))
                ans += c;
        return ans;
    }
};