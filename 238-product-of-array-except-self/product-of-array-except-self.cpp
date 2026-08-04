class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> l(n), r(n), ans(n);
        //For the left ones 
        int p = 1;
        for(int i = 0 ; i < n; i++) {
            l[i] = p;
            p *= nums[i];
        }
        //FOr the right ones
        p = 1;
        for(int i = n - 1; i >= 0; i--) {
            r[i] = p;
            p *= nums[i];
        }
        // now calculating total product
        for(int i = 0; i < n; i++) {
            ans[i] = l[i] * r[i];
        }
        return ans;
    }
};