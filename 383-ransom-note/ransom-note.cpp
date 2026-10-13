class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        vector<int> alphabet(26, 0);
        for (char &c : ransomNote) {
            if (magazine.find(c, alphabet[c - 'a']) == string::npos) return false;
            alphabet[c - 'a'] = magazine.find(c, alphabet[c - 'a']) + 1;
        }
        return true;
    }
};