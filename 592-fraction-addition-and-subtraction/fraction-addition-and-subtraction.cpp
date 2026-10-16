class Solution {
public:
    string fractionAddition(string s) {
        int num = 0, den = 1, n = s.size(), i = 0;
        while (i < n) {
            int cn = 0, cd = 0;
            bool neg = false;
            char ch = s[i];
            if (ch == '+' || ch == '-') {
                if (ch == '-') {
                    neg = true;
                }
                i++;
            }
            int st = i;
            while (i < n && isdigit(s[i])) {
                i++;
            }
            cn = stoi(s.substr(st, i - st));
            if (neg) {
                cn *= -1;
            }
            i++;
            st = i;
            while (i < n && isdigit(s[i])) {
                i++;
            }
            cd = stoi(s.substr(st, i - st));
            num = num * cd + cn * den;
            den = den * cd;
            int g = gcd(abs(num), den);
            num /= g;
            den /= g;
        }
        return to_string(num) + "/" + to_string(den);
    }
};