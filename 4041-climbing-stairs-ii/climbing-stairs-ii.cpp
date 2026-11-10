class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(), 0);
        int a = costs[n], b = INT_MAX / 2, c = INT_MAX / 2;
        for (int i = n - 1; i >= 0; --i) {
            int cur = costs[i] + min({a + 1, b + 4, c + 9});
            c = b, b = a, a = cur;
        }
        return a;
    }
};