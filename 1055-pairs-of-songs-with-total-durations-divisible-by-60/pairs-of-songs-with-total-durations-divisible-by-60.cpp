class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int c = 0;
        unordered_map<int, int> m;
        for(auto x: time) {
            int r1 = x % 60;
            int r2 = (60 - r1) % 60;
            if(m.find(r2) != m.end()) {
                c += m[r2];
            }
            m[r1]++;
        }
        return c;
    }
};




