class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int imax = 0, ic = 0;
        int dmax = 0, dc = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] < nums[i + 1]) {
                ic++;
                dc = 0;
            } else if(nums[i] > nums[i + 1]) {
                dc++;
                ic = 0;
            } else {
                ic = 0;
                dc = 0;
            }
            imax = max(imax, ic);
            dmax = max(dmax, dc);
        }
        return max(imax + 1, dmax + 1);
    }
};