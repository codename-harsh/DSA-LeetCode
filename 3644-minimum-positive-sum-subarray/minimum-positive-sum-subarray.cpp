class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size(), ans = INT_MAX;
        for(int i = 0; i < n; ++i) {
            int sum = 0;
            for(int j = 1; j <= r && i+j <= n; ++j) {
                sum += nums[i + j - 1];
                if(j >= l && sum > 0) ans = min(sum, ans);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};