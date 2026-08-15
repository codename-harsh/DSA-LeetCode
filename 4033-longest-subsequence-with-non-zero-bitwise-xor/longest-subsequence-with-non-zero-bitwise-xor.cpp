class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = 0, nonz = 0;
        for(auto x: nums) {
            ans = ans xor x;
            if(x != 0) {
                nonz++;
            }
        }
        if(ans)
            return nums.size();

        return nonz ? nums.size() - 1: 0;
    }
};