class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool> v(101); // given in constraints - 100
        for(auto &x: nums) {
            v[x] = true;
        }
        int a = k;
        while(a < 101) {
            if(!v[a])
                return a;
            a += k;
        }
        return a;
    }
};