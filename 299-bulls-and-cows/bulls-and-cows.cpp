class Solution {
public:
    string getHint(string secret, string guess) {
        int b = 0, c = 0;
        vector<int> s(10), g (10);
        for(int i = 0; i < secret.size(); ++i) {
            if(secret[i] == guess[i]) ++b;
            else {
                s[secret[i] - '0']++;
                g[guess[i] - '0']++;
            }
        }
        for(int i = 0;i < 10; ++i) c += min(s[i], g[i]);
        return to_string(b) + "A" + to_string(c) + "B";
    }
};
