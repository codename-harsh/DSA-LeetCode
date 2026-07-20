class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size() == 1)
            return 0;
            sort(nums.begin(), nums.end());
        int l = 0, ans = INT_MAX;
        for(int r = 0; r < nums.size(); r++) {
            if(r - l +1 > k){
                l++;
            }
            if(r - l + 1 == k) {
                ans = min(ans, nums[r] - nums[l]);
            }
        }
        return ans;
    }
};