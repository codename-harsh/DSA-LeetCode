class Solution {
public:
    int maxDistance(vector<int>& nums) {
        int ans = 0, l = 0, n = nums.size();
        if(nums[0] != nums[n - 1]) return n- 1;
        while(l< n && nums[l] == nums[n - 1])
            l++;
        int r = n - 1;
        while(r >= 0 && nums[0] == nums[r])
        r--;
        return max(r, n - l - 1);
    }
};