class Solution {
public:
    int countCommas(int n) {
        if(n > 0 && n < 999) return 0;
        return max(0, n - 999);
    }
};