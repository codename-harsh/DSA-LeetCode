class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) 
            return false;
        int rev = 0, temp = x;
        while(x != 0) {
            int t = x % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && t > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && t < -8))
                return 0;
        rev = rev * 10 + t;
        x /= 10;
        }
        if(rev == temp) {
            return true;
        } else 
            return false;
    }
};