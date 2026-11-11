class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        n = min(n, 10);
        int ans = 10, c = 9, num = 9;
        for(int i = 2; i <= n; i++) {
            c *= num;
            ans += c;
            num--;
        }
        return ans;
    }
};