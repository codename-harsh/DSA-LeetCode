class Solution {
    string RemSpeciChars(string& s) {
        string w ="";
        for(auto x: s) {
            if(x >= 'a' && x <= 'z' ) {
                w += x;
            } 
            if(x >= 'A' && x <= 'Z') {
                w += (x + 32);
            }
            if(x >= '0' && x <= '9') {
                w += x;
            }
        }
        return w;
    }

public:
    bool isPalindrome(string s) {
    string n = RemSpeciChars(s);
    int i = 0, j = n.size() - 1;
    while(i < j) {
        if(n[i] != n[j]) {
            return false;
            }
                i++, j--;
        }
    return true;
    }
};