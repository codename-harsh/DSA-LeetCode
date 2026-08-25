class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n == 0)
            return 0;
            int minabhitak = prices[0];
            int maxabhitk = 0;
        for(int i = 0; i< n; i++) {
            int profit = prices[i] - minabhitak;
            maxabhitk = max(profit, maxabhitk);
            minabhitak = min(minabhitak, prices[i]);
        }
return maxabhitk;        
    }
};