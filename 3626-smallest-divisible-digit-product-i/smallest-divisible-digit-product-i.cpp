class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true) {
        int ans= 1, x = n;
        while(x > 0) {
            ans *= ( x % 10);
            x /= 10;
        }
        if(ans % t == 0){
            return n;
        }
        n++;
        }
    }
};
























