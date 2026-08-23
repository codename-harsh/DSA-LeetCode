class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string s;       
        int i = 0, x = abs(num);
        while (x) {
            s.push_back('0' + x % 7);
            x /= 7;
        }
        if (num < 0)
            s.push_back('-');
        reverse(s.begin(), s.end());
        return s;
    }
};