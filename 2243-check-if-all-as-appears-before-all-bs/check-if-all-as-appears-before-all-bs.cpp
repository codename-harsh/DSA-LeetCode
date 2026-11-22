class Solution {
public:
    bool checkString(string s) {
        bool f = true;
        for(int i = 0; i < s.size()-1; ++i) {
            if(s[i] == 'b' && s[i+1] == 'a') {
                f = !f;
                break;
            }
        }
        return f;
    }
};