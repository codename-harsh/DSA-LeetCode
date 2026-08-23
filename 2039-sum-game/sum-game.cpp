class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int hf = n >> 1;
        int qL = 0, qR = 0, diff = 0;
        for (int i = 0; i < n; ++i) {
            if (i < hf) {
                if (num[i] == '?') ++qL;
                else diff += num[i] - '0';
            } else {
                if (num[i] == '?') ++qR;
                else diff -= num[i] - '0';
            }
        }
        if ((qL + qR) & 1)
            return true;
        return diff != 9 * (qR - qL) >> 1; // or / 2
    }
};