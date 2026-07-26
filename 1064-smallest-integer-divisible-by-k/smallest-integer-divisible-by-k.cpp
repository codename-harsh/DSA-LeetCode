class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k == 1) return 1;
        int ans = 0;
            // Any number made only of 1’s always ends with 1, so it can never be divisible by 2 or 5.
            // That means if k has 2 or 5 as a factor, we already know the answer is -1.
            if(k % 2 == 0 || k % 5 == 0) {
                return -1; }
        for(int i = 1; i <=k; i++) {
            ans = (ans * 10 + 1) % k;
            if(ans == 0) return i;
            }
        return -1;
        }
    };