class Solution {
private:
    bool solve(int i, int n, vector<int>& nums, int p1, int p2, int flag) {
        if (i > n)
            return p1 >= p2;
        if (flag == true) {
            return solve(i + 1, n, nums, p1 + nums[i], p2, !flag) ||
                   solve(i, n - 1, nums, p1 + nums[n], p2, !flag);
        } else {
            return solve(i + 1, n, nums, p1, p2 + nums[i], !flag) &&
                   solve(i, n - 1, nums, p1, p2 + nums[n], !flag);
        }
        return false;
    }

public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        return solve(0, n - 1, nums, 0, 0, true);
    }
};