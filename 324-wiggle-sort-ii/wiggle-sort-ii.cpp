class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();        
        vector<int> v(nums);
        sort(v.begin(), v.end());
        int l = (n - 1) / 2, r = n - 1;      
        for (int i = 0; i < n; i++) {
            if (i % 2 != 0) {
                nums[i] = v[r--];
            } else {
                nums[i] = v[l--];
            }
        }
    }
};