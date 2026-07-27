class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> m;
        int c = 0;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(m.count(nums[i] + diff) &&  m.count(nums[i] + (2*diff))) {
                c++;
            }
        }
        return c;
    }
};