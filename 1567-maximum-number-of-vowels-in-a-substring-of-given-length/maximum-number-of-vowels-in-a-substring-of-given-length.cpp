class Solution {
public:

    bool vowel(char n) {
        return n=='a'||n=='e'||n=='i'||n=='o'||n=='u';
    }

    int maxVowels(string s, int k) {
        int l = 0, c = 0, ans = 0;
    for(int r = 0; r < s.size(); r++) {
        if(vowel(s[r])) 
            c++;
            if(r - l + 1 > k) {
                if(vowel(s[l]))
                    c--;

                    l++;
            }   if(r - l + 1 == k) {
                ans = max(ans, c);
            }
        }
            return ans;
    }
};