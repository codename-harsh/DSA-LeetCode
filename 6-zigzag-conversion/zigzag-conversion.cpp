class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) {
            return s;
        }
    vector<string>zig(numRows);
    int i = 0, row = 0;
    bool dir = 1;
    while(true) {
        if(dir) {
            while(row < numRows && i < s.size()) {
                zig[row++].push_back(s[i++]);
            }
            row = numRows - 2;
        }
        else {
            while(row >= 0 && i < s.size()) {
                zig[row--].push_back(s[i++]);
            }
            row = 1;
        }
    if(i>= s.size()) break;
    dir = !dir; // negation of dir values huh ...
    }
    string ans = ""; // empty string to initialize
    for(int i = 0; i< zig.size(); i++) {
        ans += zig[i];
    }
        return ans;
    }
};