class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        // checkin freq for the edge cases
        unordered_map<int, int> f;
        // sliding - window
        int l = 0, ans = 0;
        for (int r = 0; r < nums.size(); r++) {
            f[nums[r]]++;
            while (f[nums[r]] > k) { // checkin for invalid con.
                f[nums[l]]--;
                l++;
            }
            ans = max(r - l + 1, ans);
        }
    return ans;
}
}
;