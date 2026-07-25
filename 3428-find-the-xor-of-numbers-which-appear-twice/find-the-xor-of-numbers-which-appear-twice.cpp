class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x: nums)
            m[x]++;
            
        int ans = 0;
        for(auto &[x, cnt]: m) {
            if(cnt == 2){
                ans ^= x;
            }
        }
            return ans;
    }
};
