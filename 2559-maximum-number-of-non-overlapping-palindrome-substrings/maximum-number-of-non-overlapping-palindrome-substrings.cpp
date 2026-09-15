class Solution {
private:
    const bool isPal(string&s, int l, int r) {
        for( ; l < r; l++, r--) {
            if(s[l] != s[r]) return false;
        } return true; //else true !
    }

public:
    int maxPalindromes(string s, int k) {
        int c = 0, nxt = 0;
        for(int r = k -1; r < s.length(); r++) {
            int l = r - k + 1; //size of the dynamic sliding window we gonna use 
            bool add = (l >= nxt && isPal(s, l, r)) || (l>nxt && isPal(s, l - 1, r));
            if(add) c++, nxt = r + 1;
        }
        return c;
    }
};
