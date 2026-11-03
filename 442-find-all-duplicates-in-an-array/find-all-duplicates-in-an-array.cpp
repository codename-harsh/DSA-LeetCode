class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int &x: nums) {
            int i = abs(x) - 1;
            if(nums[i] < 0) ans.push_back(abs(x));
            else nums[i] = - nums[i];
        }
        return ans;
    }
};