class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int c = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] > 0) {
               int x = nums[i];
               ++c;
               for(int j = i; j < nums.size(); ++j)  {
                nums[j] -= x;
               }
            }
        }
        return c;
    }
};