class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), ans = nums[n-1] - nums[0];
        for(int i = 0; i < n-1; i++) {
            int mini = min(nums[0] + k, nums[i+1] - k);
            int maxi = max(nums[n-1] - k, nums[i] + k);
            ans = min(ans, maxi - mini);
        }
        return ans;
    }
};