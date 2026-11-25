class Solution {
public:
    int solve(vector<int>& prefix, vector<int>& left, vector<int>& right, int l, int r) {
        int ft = right[l], lt = left[r];
        if(ft == -1 || lt == -1 || ft >= lt) return 0;
        return prefix[lt] - prefix[ft];
}
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n = s.size(), c = 0, prev = -1;
        vector<int> prefix(n), left(n), right(n), ans;
        for(int i = 0; i < n; ++i) {
            if(s[i] == '*') ++c;
            prefix[i] = c;
            if(s[i] == '|') prev = i;
            left[i] = prev;
        }
        prev = -1;
        for(int i = n - 1; i >= 0; --i) {
            if(s[i] == '|') prev = i;
            right[i] = prev;
        }
        for(auto&q: queries) {
            ans.push_back(solve(prefix, left, right, q[0], q[1]));
        }
        return ans;
    }
};

//simply queriesw se ek element nikalo l and r me baato
//then solve and count 