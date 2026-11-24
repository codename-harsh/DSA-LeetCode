class Solution {
private: 
    int lcm(int a, int b) {
        if(a == 0 || b == 0) return 0;
        return (a / gcd(a, b)) * b;
    }
    bool check(vector<int>& nums, int l, int r) {
        long long p = 1;
        int g = nums[l], lc = nums[l];
        for(int i = l; i <= r; ++i) {
            if(p > INT_MAX / nums[i]) return false;
            p *= nums[i];
            g = gcd(g, nums[i]);
            lc = lcm(lc, nums[i]);
        }
        return p == 1LL * g * lc;
    }

public:
    int maxLength(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        int ans = 0, n = nums.size();
        for(int i = 0; i < n; ++i) {
            for(int j = i; j < n; ++j) {
                if(check(nums, i, j))
                    ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};