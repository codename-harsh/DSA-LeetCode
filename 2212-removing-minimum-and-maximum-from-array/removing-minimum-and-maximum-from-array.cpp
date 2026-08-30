class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int m = *min_element(nums.begin(), nums.end()), n = *max_element(nums.begin(), nums.end());
        int mini = -1, maxi = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == m)
                mini = i;
            if(nums[i] == n)
                maxi = i;
        }
        int l = max(mini, maxi) + 1, r = nums.size() - min(mini, maxi);
        int mix = min(mini, maxi) + 1 + nums.size() - max(mini, maxi);
        return min({l, r, mix});
    }
};