class NumArray {
    vector<int> nums;
public:
    NumArray(vector<int>& nums) : nums(nums) {

    }
    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; i++) {
            sum += nums[i];
        }
        return sum;
    }
};