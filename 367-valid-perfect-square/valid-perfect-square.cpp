class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1) return num;
        int l = 1, r = num;
        while(l <= r) {
            long long mid = l + (r-l) / 2, sqr = mid*mid;
            if(sqr == num) return true;
            else if(sqr > num) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};