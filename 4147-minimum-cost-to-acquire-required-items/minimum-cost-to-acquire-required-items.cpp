class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(need1 > need2) {
            return minimumCost(cost2, cost1, costBoth, need2, need1);
        }
        long long cb = 1LL * need1 * min(costBoth, cost1 + cost2);
        long long cr = 1LL * (need2 - need1) * min(cost2, costBoth);
        return cb + cr;
    }
};
