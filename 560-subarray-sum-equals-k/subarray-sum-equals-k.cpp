class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, c = 0;
        unordered_map<int, int> dino;
        dino[0] = 1;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(dino.find(sum - k) != dino.end()) {
                c += dino[sum - k];
            }
            dino[sum]++;
        }
        return c;
    }
};