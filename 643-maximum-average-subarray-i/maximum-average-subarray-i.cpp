class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double x = 0;
        for (int i = 0; i < k; ++i) {
            x += nums[i];
        }
        double s = x;
        for (int i = k; i < nums.size(); ++i) {
            x += nums[i] - nums[i - k];
            s = max(s, x);
        }
        return s / k;
    }
};