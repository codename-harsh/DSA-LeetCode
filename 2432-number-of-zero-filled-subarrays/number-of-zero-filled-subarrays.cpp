class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c = 0, s = 0;
        for(auto v: nums) {
            if(v == 0) {
                s++; // Basically streak counting 
                c += s;
            } else {
                s = 0; // 0 nahi mila so streak = 0
            }
        }
        return c;
    }
};