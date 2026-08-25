class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int c = nums[0], ans = nums[0]; // c is current 
     for(int i = 1; i < nums.size(); i++) {
        c = max(nums[i], c + nums[i]);
        ans = max(c, ans);
     }
     return ans;
    }
};