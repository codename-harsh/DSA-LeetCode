class Solution {
public:
    int minMoves(vector<int>& nums) {
        const int mn = *min_element(nums.begin(), nums.end());
        int c = 0;
        for (int& x : nums) {
            c += x - mn;
        }
        return c;
    }
};