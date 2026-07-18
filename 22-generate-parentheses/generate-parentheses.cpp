class Solution {
public:

void solve(int open, int close, vector<string>& ans, string str) {
    // agar dono zero hua tb -> base - case
    if(open == 0 && close == 0){
        ans.push_back(str);
        return;
    }
    //n0w the solving of damn cases
    if(open > 0) {
        solve(open - 1, close, ans, str + "(");
    }
    if(close > 0 && close > open) {
        solve(open, close - 1, ans, str + ")");
    }
}

    vector<string> generateParenthesis(int n) {
        vector<string> ans ;
        solve(n, n, ans, "");
        return ans;
    }
};