class Solution {
public:
    bool canJump(vector<int>& nums) {
        int faah = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i > faah) return false;
            faah = max(faah, i + nums[i]);
            if(faah >= nums.size() - 1)
                return true;
        }
        return true;
    }
};