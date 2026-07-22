class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int max = 0;
    int s = prices[0];
    for(int i = 0; i < prices.size(); i++) {
        if(s < prices[i])
        max += prices[i] - s;
    s = prices[i];
    }
    return max;
    }
};