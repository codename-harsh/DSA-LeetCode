class Solution {
public:
    void solve(int idx, vector<int>& nums, vector<int>& t,
               vector<vector<int>>& ans) {
        ans.push_back(t);
        for (int i = idx; i < nums.size(); i++) {
            if (i > idx && nums[i] == nums[i - 1])
                continue;
            t.push_back(nums[i]);
            solve(i + 1, nums, t, ans);
            t.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> t;
        vector<vector<int>> ans;
        solve(0, nums, t, ans);
        return ans;
    }
};