class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int r = accounts.size();
        int c = accounts[0].size();
        int max = 0;
        for(int i = 0; i < r; i++) {
            int sum = 0;
            for(int j = 0; j < c; j++) {
                sum += accounts[i][j];
            }
            if(sum > max)
                max = sum;
        }
        return max;
    }
};