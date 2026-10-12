class Solution {
public:
    const int mod = 1e9 + 7;
    int maxSum(vector<int>& nums, int k) {
        ios::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int> v(32);
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = 0; j < v.size(); ++j) {
                if(nums[i] & (1 << j))//2^j
                    v[j]++;
            }
        }
        long long ans = 0;
        for(int i = 0; i < k; ++i) {
            long long x = 0;
            for(int j = 0; j < v.size(); ++j) {
                if(v[j] > 0) {
                    x |= 1 << j;
                    v[j]--;
                }
            }
            ans = (ans + x*x) % mod;
        }
        return ans;

    }
};