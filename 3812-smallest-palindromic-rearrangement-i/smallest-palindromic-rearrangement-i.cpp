class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s;
        int n = s.size(); 
        int p = n / 2;
        sort(s.begin(), s.begin() + p);
        sort(s.end()-p, s.end());
        reverse(s.end()-p, s.end());
        return s;
    }
};


