class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int totes = 0;
        for(const auto&x: nums) 
            totes += x;
        int l = 0;
        for(const auto&x: nums) { 
            int r = totes - l - x;
            ans.push_back(abs(l - r));
            l += x;
        }
        return ans;
    }
};