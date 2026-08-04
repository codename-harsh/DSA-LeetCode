class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int al = 0, bob = 0;
        for(int x : nums) {
            if(x < 10) {
                al += x;
            }
            else {
                bob += x;
            }
        }
        if(al == bob) {
            return false;
        }
        else {
            return true;
        }
    }
};