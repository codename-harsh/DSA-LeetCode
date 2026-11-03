class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans, f(nums.size() + 1);
        for(int &x: nums) if(++f[x] == 2)
                            ans.push_back(x);
        return ans;
    }
};