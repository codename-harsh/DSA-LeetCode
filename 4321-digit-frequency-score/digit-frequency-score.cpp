class Solution {
public:
    int digitFrequencyScore(int n) {
        //THe ans is simply sum of all digits 
        int ans = 0;
        while(n) {
            ans += n % 10;
            n /= 10;
        }
        return ans;
    }
};