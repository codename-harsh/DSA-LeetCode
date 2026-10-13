class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] < 0)
                nums[i] *= -1;
        sort(nums.begin(), nums.end());
        long long score = 0;
        int l = 0, r = nums.size() - 1;
        while(l <= r) {
            score += (nums[r] * nums[r]);
            if(l != r)
                score -= (nums[l] * nums[l]);
            r--;
            ++l;
        }
        return score;
    }
};