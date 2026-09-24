class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); ++i) {
            int t = nums[i], sum = 0;
            while(t ) {
                sum += t % 10, t /= 10;
            }
            if(sum == i)    ans = min(ans, sum);
        }
        return ans == INT_MAX ? -1 : ans;
    }
};