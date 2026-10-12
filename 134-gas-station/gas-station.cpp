class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int def = 0, b = 0, st = 0;
        for (int i = 0; i < gas.size(); ++i) {
            b += gas[i] - cost[i];
            if (b < 0) {
                def += b;
                st = i + 1;
                b = 0;
            }
        }
        if (def + b >= 0) {
            return st;
        } else
            return -1;
    }
};