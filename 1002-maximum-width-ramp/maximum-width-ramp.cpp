
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size(), l = 0, r = 0, maxi = 0;
        vector<int> maxright(n, 0);
        maxright[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxright[i] = max(maxright[i + 1], nums[i]);
        }
        while (r < n) {
            if (maxright[r] >= nums[l]) {
                maxi = max(maxi, r - l);
                r++;
            } else {
                l++;
            }
        }
        return maxi;
    }
};