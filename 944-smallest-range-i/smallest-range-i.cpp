class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        if((maxi - mini) - (2 * k) <= 0 || maxi - mini == 0)
            return 0;
        else
            return (maxi - mini) - (2 * k);
    }
};