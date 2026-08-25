class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1;
        int r = nums.size() - 1;
        for(int l = nums.size() - 2; l >= 0; l--) {
            if(nums[l] < nums[r]) {
                ans = max(ans, nums[r] - nums[l]);
            } else {
                r = l;
            }
        }
        return ans;
    }
};