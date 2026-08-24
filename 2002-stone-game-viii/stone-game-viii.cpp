class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        for(int i = 1; i < n; i++) { //in place shi to save space ;)
            stones[i] += stones[i - 1];
        }
        int maxi = stones[n - 1];
        for(int i = n - 2; i >= 1; i--) {
            maxi = max(maxi, stones[i] - maxi);
        } // Each iteration would update the maximum answer possible
        return maxi;
    }
};