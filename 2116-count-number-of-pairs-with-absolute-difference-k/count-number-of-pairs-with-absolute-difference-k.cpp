class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int ans = 0;
        for(int x : nums){
            ans += freq[x - k];
            ans += freq[x + k];
            freq[x]++;
        }
        return ans;
    }
};