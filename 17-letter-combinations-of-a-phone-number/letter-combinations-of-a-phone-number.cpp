class Solution {
public:
        // Global declaration of ans vector
        vector<string> ans;
        

    void solve(string& digits, int i, string& str, vector<string>& alphas) {
        if(i == digits.size()) {
            ans.push_back(str);
            return;
        }
        string s = alphas[ digits[i] - '2' ];
        for(auto x: s) {
            str.push_back(x);
            solve(digits, i + 1, str, alphas);
            str.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> alphas = { // manually sare alphabets add kr do iss vector me 
            "abc", "def", "ghi", "jkl", "mno",
            "pqrs", "tuv", "wxyz"
        };
        string str; // testing dummy hehe
        solve(digits, 0, str, alphas); // helper function to solve the damn ques T_T
    return ans; // globally declared array ko return kar de rha TwT
    }
};