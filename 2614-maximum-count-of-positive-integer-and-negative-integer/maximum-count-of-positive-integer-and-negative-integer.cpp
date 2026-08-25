class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = 0, p =0;
        for(int x: nums) {
            if(x > 0) p++;
            else if(x < 0) n++;
        }
        return max(n, p);
    }
};