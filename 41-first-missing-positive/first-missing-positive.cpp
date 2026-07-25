class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int t = 1; unordered_set<int> s(nums.begin(), nums.end());
            while(s.find(t) != s.end())
            t++;
        return t;
    }
};