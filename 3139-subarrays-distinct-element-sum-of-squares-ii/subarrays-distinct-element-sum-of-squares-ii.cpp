class Solution {
public:
    const long long mod = 1e9 + 7;
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        vector<int> last(100005, -1);
        set<int> pos = {n};
        long long sum = 0, sumsq = 0, ans = 0;
        for(int i = n - 1; i >= 0; --i) {
            long long len = n - i;
            if(last[nums[i]] != -1) {
                pos.erase(last[nums[i]]);
                int prevpos = i;
                long long c = 1;
                sum = sumsq = 0;
                for(int x : pos) {
                    long long gap = x - prevpos;
                    sum = (sum + gap * c) % mod;
                    sumsq = (sumsq + gap * c * c) % mod;
                    prevpos = x;
                    c++;
                }
            } else {
                sumsq = (sumsq + 2 * sum + len)    % mod;
                sum = (sum + len) % mod;
            }
            ans = (ans + sumsq) % mod;
            last[nums[i]] = i;
            pos.insert(i);
        }
        return ans;
    }

    // Hash Set BRUTE FORCE Methood ; gets TLE after 535 / 542 cases :(
    // int sumCounts(vector<int>& nums) {
    //     long long ans = 0; int n = nums.size();
    //     for(int i = 0; i < n; ++i) {
    //         unordered_set<int> s;
    //         for(int j = i; j < n; ++j) {
    //             s.insert(nums[j]);
    //             long long d = s.size();
    //             ans = (ans + d * d) % mod;
    //         }
    //     }
    //     return ans;
    // }
};