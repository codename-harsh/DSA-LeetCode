class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size(), l = 0, w = 0, mini = 0, c = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                c++;
            }
        while (c > 1) {
                if (nums[l] == 0)    --c;
                l++;
        }
            mini = max(mini, (i - l + 1) - 1);
        }
        return mini;
    }
};