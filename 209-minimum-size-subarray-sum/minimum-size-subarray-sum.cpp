class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, sum = 0, ans = INT_MAX;        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i]; 
            while(sum >= target) {
            ans = min(ans , i - l + 1);
             sum-=nums[l];
             l++;
            }
        }
            if(ans == INT_MAX)
                return 0;
                return ans;
    }
};