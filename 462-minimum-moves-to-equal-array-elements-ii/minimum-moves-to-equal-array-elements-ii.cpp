class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int c = nums[nums.size()/2], ans = 0;
        for(int &x: nums) ans += abs(c - x);
        return ans;
    }
};