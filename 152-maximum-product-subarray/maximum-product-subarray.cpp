class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), mini = nums[0], maxi = nums[0], ans = nums[0];
        for(int i = 1; i< n; i++) {
            int a = nums[i], b = nums[i] * mini, c = nums[i] * maxi;
            mini = min(a, min(b, c));
            maxi = max(a, max(b, c));
            ans = max(ans, max(maxi, mini));
        }
        return ans;
    }
};