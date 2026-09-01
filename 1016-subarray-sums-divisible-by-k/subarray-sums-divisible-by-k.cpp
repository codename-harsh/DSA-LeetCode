class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> f (k, 0);
        f[0] = 1;
        int sum = 0, ans = 0;
        for(auto x: nums) {
            sum += x;
        int rem = sum % k;
        if(rem < 0) {
            rem += k;
        }
        ans += f[rem];
        f[rem]++;
        }
    return ans;
    }
};