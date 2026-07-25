class Solution {
public:
    vector<int> countBits(int n) {
      vector<int> ans;
        for(int i = 0; i <= n; i++){
            ans.push_back(bitset<32>(i).count());
        }
        return ans;
    }
};
