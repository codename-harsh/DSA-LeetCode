class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini = INT_MAX, maxi = INT_MIN, n = nums.size();
        vector<int> p(n), s(n); //p->prefix && s->suffix
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            p[i] = maxi;
        }
        for(int i = n-1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            s[i] = mini;
        }
        for(int i = 0; i < n; i++) {
            if((p[i] - s[i]) <= k)
                return i;
        }
        return -1;
    }
};