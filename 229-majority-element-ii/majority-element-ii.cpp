class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size(), c = 1;
        for(int i = 1; i <= n; ++i) {
            if(i < n && nums[i] == nums[i - 1]) c++;
            else {
                if(c > n / 3)   ans.push_back(nums[i - 1]);
                c = 1;
            }
        }
        return ans;
    }
};