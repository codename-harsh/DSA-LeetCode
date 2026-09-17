class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int ans = INT_MAX, n = arr.size(), l = 0, sum = 0;
        vector<int> v(n, INT_MAX);
        for(int r = 0; r < n; r++) {
            sum += arr[r];
            while(sum > target) {
                sum -= arr[l++];
            }
            if(sum == target) {
                int curr = r - l + 1;
                if(l > 0 && v[l - 1] != INT_MAX) {
                    ans = min(ans, curr + v[l - 1]);
                }
                v[r] = curr;
            }
            if(r > 0) {
                v[r] = min(v[r], v[r-1]);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};