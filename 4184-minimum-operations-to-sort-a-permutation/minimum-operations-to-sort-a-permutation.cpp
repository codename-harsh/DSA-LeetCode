class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int desc_ans = INT_MAX;
        int cnt = 0, idx = -1;
        for (int i = 1; i < n; i++)
            if (nums[i-1] < nums[i]) { idx = i; cnt++; }
        if (cnt == 1 && nums[0] <= nums[n-1])
            desc_ans = min(idx + 1, 1 + n - idx);
        else if (cnt == 0) desc_ans = 1;

        int asc_ans = INT_MAX;
        cnt = 0; idx = -1;
        for (int i = 1; i < n; i++)
            if (nums[i-1] > nums[i]) { idx = i; cnt++; }
        if (cnt == 1 && nums[0] >= nums[n-1])
            asc_ans = min(idx, 2 + n - idx);
        else if (cnt == 0) asc_ans = 0;
        int ans = min(asc_ans, desc_ans);
        return ans == INT_MAX ? -1 : ans;
    }
};