class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f = INT_MAX, s = INT_MAX;
        for(auto x: nums) {
            if(x <= f) {
                f = x;
            } else if(x <= s) {
                s = x;
            } else 
                return true;
        }
        return false;
    }
};







