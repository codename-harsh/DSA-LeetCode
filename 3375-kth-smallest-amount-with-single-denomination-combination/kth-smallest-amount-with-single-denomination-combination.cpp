class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) {
                int n = coins.size();
        vector<pair<long long, int>> subsets;
        subsets.reserve((1 << n) - 1);
        
        for (int i = 1; i < (1 << n); ++i) {
            long long cur_lcm = 1;
            int count = 0;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    count++;
                    cur_lcm = std::lcm(cur_lcm, (long long)coins[j]);
                }
            }
            subsets.push_back({cur_lcm, count % 2 == 1 ? 1 : -1});
        }
        long long left = 1;
        long long right = 1LL * *std::min_element(coins.begin(), coins.end()) * k;
        while (left < right) {
            long long mid = left + (right - left) / 2;
            long long cnt = 0;
            for (const auto& sub : subsets) {
                cnt += sub.second * (mid / sub.first);
            }
            if (cnt >= k) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};