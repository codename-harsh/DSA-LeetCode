class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, p = 1;
        int t = n;
        while(t) {
            sum += t % 10;
            p *= t % 10;
            t /= 10;
        }
        return n % (sum + p) == 0;
    }
};