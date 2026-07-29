class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length())
            return false;
            unordered_map<char, int> a;
            unordered_map<char, int> b;
        
        for(int i = 0; i < s1.length(); i++) {
            a[s1[i]]++;
            b[s2[i]]++;
        }
        if(a == b)
            return true;
        int l = 0;
        for(int r = s1.length(); r < s2.length(); r++) {
            b[s2[r]]++;
            b[s2[l]]--;
        if(b[s2[l]] == 0) {
            b.erase(s2[l]);
        }
        l++;
        if(a == b){
            return true;
        }
            }
        return false;
    }
};