class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> f(26, 0);
        vector<bool> basket(26, false);
        string start;
        for(auto x: s)  
            f[x - 'a']++;
        for(auto x: s) {
            f[x - 'a']--;
            if(basket[x - 'a']) {
                continue;
            } 
            while(!start.empty() && start.back() > x && f[start.back() - 'a'] > 0) {
                basket[start.back() - 'a'] = false;
                start.pop_back();
}
        start.push_back(x);
        basket[x - 'a'] = true;
        }
        return start;
    }
};