class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size(), ans = 0, cnt = 0;
        int i = 0, j = 0, odd = 0;
        while(j < n) {
            if(nums[j] & 1) odd++;
            while(odd > k) {
                if(nums[i] & 1) odd--;
                i++;
            }
            cnt = j - i + 1;            
            if(odd == k) {
                int temp = i;
                while(temp <= j && nums[temp] % 2 == 0) {
                    ans++;
                    temp++;
                }
                ans++;
            }
            j++;
        }
        return ans;
    }
};