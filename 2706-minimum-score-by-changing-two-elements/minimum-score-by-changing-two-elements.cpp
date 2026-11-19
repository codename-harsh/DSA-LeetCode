class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), ans = INT_MAX;
        for(int i = 0; i <=2; ++i)
            ans = min(ans, nums[i + n - 3] - nums[i]);
        return ans;
    }
};