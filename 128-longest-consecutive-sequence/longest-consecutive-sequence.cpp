class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end()); // insert every element in the set .
        int ans = 0;
        for(auto i: s) {
            if(s.find(i - 1) == s.end()) { // start counting only when i - 1 is not in the set 
                int c = 1, cn = i; // count every possible sequence 
                while(s.find(cn + 1) != s.end()) {
                    c++, cn++; // cn is current number 
                }
                ans = max(ans, c); // and then store it in the damn ans whatever the max ans is !
            }
        }
        return ans;
    }
};