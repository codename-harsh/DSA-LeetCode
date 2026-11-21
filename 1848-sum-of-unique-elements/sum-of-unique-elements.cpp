class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> f(10001);
        int ans = 0;
        for(auto&x: nums) 
            f[x]++;
        for(int i = 0; i < f.size(); ++i) {
            if(f[i] == 1) {
                ans += i;
            }
        }
        return ans;
    }
};