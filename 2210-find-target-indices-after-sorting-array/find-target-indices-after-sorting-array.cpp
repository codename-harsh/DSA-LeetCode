class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int l = 0, e = 0;
        for (auto&x : nums) {
            if (x < target) ++l;
                else if (x == target) ++e;
        }
        vector<int> ans;
        for (int i = l; i < l + e; ++i) ans.push_back(i);
        return ans;
    }
};