class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if( k < 2) return 0;
        int l = 0, ans  = 0, p = 1;
        for(int r = 0; r < nums.size(); r++) {
            p *= nums[r];
            while(p >= k) {
                p /= nums[l]; //Left se ek element nikal do
                l++;
            }
            ans += r - l + 1;
        }
        return ans;
    }
};