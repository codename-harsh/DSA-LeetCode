class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> f(26, 0);
        for(auto x: word1)  f[x - 'a']++;
        for(auto x: word2)  f[x - 'a']--;
        for(auto x: f){
            if(abs(x) > 3) return 0;
        }
        return true;
    }
};