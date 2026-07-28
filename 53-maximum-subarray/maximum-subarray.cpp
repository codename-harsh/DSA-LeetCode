class Solution {
private:
    int helper(vector<int>& nums, int l, int r) {
        if(l == r) return nums[l];
        // here bs = border sum :d
        int maxlbs = INT_MIN, maxrbs = INT_MIN, mid = l + ((r - l) >> 1);
        //RE calls for the left and right part
        int mls = helper(nums, l, mid);
        int mrs = helper(nums, mid + 1, r);
        //Max Cross Border Sum for either Left crossborder or right crossborder
        int lbs = 0, rbs = 0;
        for(int i = mid; i >= l; i--) {
            lbs += nums[i];
            if(lbs > maxlbs) maxlbs = lbs;
        }
        for(int i = mid+1; i <= r; i++) {
            rbs += nums[i];
            if(rbs > maxrbs) maxrbs = rbs;
        }
        int cbs = maxlbs + maxrbs; //cbs: Cross Border Sum
        return max(mls, max(mrs, cbs));
    }

public:
    int maxSubArray(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};