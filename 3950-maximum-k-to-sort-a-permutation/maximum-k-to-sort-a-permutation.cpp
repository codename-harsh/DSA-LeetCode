class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {             // misplaced element must be swapped
                ans &= nums[i];
            }
        }
        return ans == -1 ? 0 : ans;
    }
};