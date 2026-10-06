class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long sum = 0, ans = 0;
        unordered_set<int> store;
        int i = 0, j = 0, n = nums.size(), val;
        while (j < n) {
            val = nums[j];
            sum += val;
            while (store.count(val)) {
                sum -= nums[i];
                store.erase(nums[i++]);
            }
            if (j - i + 1 == k) {
                ans = max(ans, sum);
                store.erase(nums[i]);
                sum -= nums[i++];
            }
            store.insert(val);
            j++;
        }
        return ans;
    }
};