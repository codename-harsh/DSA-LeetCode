class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> f(101, 0), ans;
        for(int &x: nums)  if(++f[x] == 2) ans.push_back(x);
        return ans;
    }
};