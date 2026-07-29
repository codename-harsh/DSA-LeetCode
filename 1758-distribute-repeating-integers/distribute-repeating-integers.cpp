class Solution {
private:
    bool helper(vector<int>&c, vector<int>&quantity, int idx) {
        //base case
        if(idx == quantity.size()) {
            return true;
        }
        //RE
        for(int i = 0; i < c.size(); i++) {
            if(c[i] >= quantity[idx]) {
                c[i] -= quantity[idx];
                if(helper(c, quantity, idx + 1)){
                    return true;
                }
                c[i] += quantity[idx];
            }
        }
        return false;
    }

public:
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int> m;
        for (auto x : nums)
            m[x]++;
        vector<int> c;
        for (auto x : m) {
            c.push_back(x.second);
        }
        sort(quantity.rbegin(), quantity.rend());
            return helper(c, quantity, 0);
    }
};