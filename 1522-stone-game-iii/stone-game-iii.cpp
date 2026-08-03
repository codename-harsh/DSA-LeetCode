class Solution {
private:
    int solve(vector<int>& v, int idx, vector<int>& d) {
        if(idx >= v.size())
            return 0;
        if(d[idx] != INT_MIN)
            return d[idx];
        int sum = 0;
        int ans = INT_MIN;
        for(int i = idx; i < min((int)v.size(), idx + 3); i++) {
            sum += v[i];
            ans = max(ans, sum - solve(v, i + 1, d));
        }
        return d[idx] = ans;
    }


public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int> d(n, INT_MIN);
        int x = solve(stoneValue, 0, d);
        if(x == 0) {
            return "Tie";
        } else {
            if(x > 0)
                return "Alice";
            if(x < 0)
                return "Bob";
        }
        return "";
    }
}; 