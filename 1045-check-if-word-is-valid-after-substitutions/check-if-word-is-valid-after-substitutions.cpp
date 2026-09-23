class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0)   return true;
        int f = s.find("abc");
        if(s.find("abc") != string::npos) {
            string tl = s.substr(0, f), tr = s.substr(f + 3, s.size());
            return isValid(tl + tr);
        }
        return false;
    }
};