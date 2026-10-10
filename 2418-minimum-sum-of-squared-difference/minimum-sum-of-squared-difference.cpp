class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1,
                               int k2) {
        int n = nums1.size();
        vector<int> freq(100001, 0);
        for (int i = 0; i < n; i++) {
            freq[abs(nums1[i] - nums2[i])]++;
        }
        long long k = k1 + k2;
        for (int i = 100000; i > 0; i--) {
            if (k == 0) {
                break;
            }

            if (freq[i] > 0) {
                if (freq[i] <= k) {
                    k -= freq[i];
                    freq[i - 1] += freq[i];
                    freq[i] = 0;

                } else {
                    freq[i - 1] += k;
                    freq[i] -= k;
                    k = 0;
                }
            }
        }
        long long ans = 0;
        for (int i = 1; i <= 100000; i++) {
            ans += 1LL * freq[i] * i * i;
        }
        return ans;
    }
};