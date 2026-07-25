class Solution {
public:
    string reverseWords(string s) {
    int i = 0, l = 0, n = s.size(), r = 0;
    while(i < n){
        while(i < n && s[i] == ' ') {
            i++;
        }
        //edge case
        if(i == n)
            break;
        while(i < n && s[i] != ' ') {
            s[r++] = s[i++];
        }
        reverse(s.begin() + l, s.begin() + r);
        s[r++] = ' ';
        l = r;
    }
        s.resize(r - 1);
        reverse(s.begin(), s.end());
        return s;
    }
};
