class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end()), ans = INT_MAX;
        for(int i = maxi; i <= maxi + 100; ++i) {
            int c = 0;
            for(int &x: nums)   c += i -x;
            ans = min(ans, c);
        }
        return ans;
    }
};