class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size(), ans = INT_MAX;
        for(int j = 0; j < n -1; j++) {
            int lmin = INT_MAX, rmin = INT_MAX;
            // Minimum on left
            for(int i = 0; i < j; i++) {
                lmin = min(lmin, nums[i]);
            }
            //Minimum of right
            for(int i = j+1; i < n; i++) {
                rmin = min(rmin, nums[i]);
            }
            if(lmin < nums[j] && rmin < nums[j]) {
                ans = min(ans, lmin + nums[j] + rmin);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};