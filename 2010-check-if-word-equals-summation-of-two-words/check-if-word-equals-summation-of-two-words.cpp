class Solution {
public:
    int solve(string s){
        int l = 0;
        for(auto letter : s){
            int val = (int) letter - 97;
            l = l * 10 + val;
        }
        return l;
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if(solve(firstWord) + solve(secondWord) == solve(targetWord)) return true;
        return false;
    }
};