class Solution {
public:
    int maxDepth(string s) {
        int c = 0, ans = 0;
        for(auto str: s) {
            if(str == '(') {
                c++;
            ans = max(ans, c);
            }
            if(str == ')') {
                c--;
                ans = max(ans, c);
            }
        }
        return ans;
    }
};