class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        vector<long long> ans(k), p(k);
        for (const auto& x : nums) {
            vector<long long> cur(k);
            int r = x % k;
            cur[r]++;
            for (int j = 0; j < k; j++)     cur[j * r % k] += p[j];
            for (int j = 0; j < k; j++)     ans[j] += cur[j];
            p = cur;
        }
        return ans;
    }
};