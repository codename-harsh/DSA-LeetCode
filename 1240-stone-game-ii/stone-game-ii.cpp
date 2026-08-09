class Solution {
private:
    vector<vector<int>> dp;

    int solve(vector<int>& piles, int i, int M) {
        int n = piles.size();

        if(i >= n)
            return 0;

        if(dp[i][M] != -1)
            return dp[i][M];

        int ans = INT_MIN;
        int sum = 0;

        for(int x = 1; x <= 2 * M && i + x <= n; x++) {
            sum += piles[i + x - 1];

            ans = max(ans,
                sum - solve(piles, i + x, max(M, x))
            );
        }

        return dp[i][M] = ans;
    }

public:
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();

        int total = 0;
        for(int x : piles)
            total += x;

        dp.assign(n, vector<int>(n + 1, -1));

        int diff = solve(piles, 0, 1);

        return (total + diff) / 2;
    }
};