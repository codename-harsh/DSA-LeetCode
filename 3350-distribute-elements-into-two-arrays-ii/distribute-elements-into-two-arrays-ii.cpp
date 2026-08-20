// We'll use the damb binary searxh to find the fierst index of the element which is greater than x
class Solution { 
public:
    int greaterCount(vector<int>&v, int d) {
        return v.end() - upper_bound(v.begin(), v.end(), d);
    }
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> left, right, l, r;
        left.push_back(nums[0]), right.push_back(nums[1]);
        l.push_back(nums[0]), r.push_back(nums[1]);
        for(int i = 2; i < n; i++) {
            int x = greaterCount(left, nums[i]), y = greaterCount(right, nums[i]);
            if(x > y) {
                left.insert(left.end() - x, nums[i]);
                l.push_back(nums[i]);
            } else if(y > x) {
                right.insert(right.end() - y, nums[i]);
                r.push_back(nums[i]);
            }
            else {
                if(left.size() <= right.size()) {
                    left.insert(left.end() - x, nums[i]);
                    l.push_back(nums[i]);
                }
                else {
                    right.insert(right.end() - y, nums[i]);
                    r.push_back(nums[i]);
                }
        }
    }
    l.insert(l.end(), r.begin(), r.end());
    return l;
    }
};