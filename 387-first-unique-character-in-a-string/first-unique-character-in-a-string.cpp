class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>f;
        for(auto x: s){
            f[x]++;
        }
        for(int i = 0; i < s.length(); i++) {
            if(f[s[i]] == 1 ){
                return i;
            }
        }
        return -1;
    }
};