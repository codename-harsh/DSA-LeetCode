class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        for(int i = 1; i < n; i++) {
            stones[i] += stones[i - 1];
        }
        int maxi = stones[n - 1];
        for(int i = n - 2; i >= 1; i--) {
            maxi = max(maxi, stones[i] - maxi);
        }
        return maxi;
    }
};