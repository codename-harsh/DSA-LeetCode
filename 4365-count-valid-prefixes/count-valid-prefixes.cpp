class Solution {
public:
    int countValidPrefixes(string s) {
        int a = 0, b = 0, c = 0;
        for(auto x: s) {
            if(x == '0') a++;
            else b++;
            if(abs(a - b) <= 1) c++;
        }
        return c;
    }
};