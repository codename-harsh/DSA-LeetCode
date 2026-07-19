class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> f(26, 0); // 26 size ka and sab elements ko 0 se initialise krdo baad me baki matching hogi 
        vector<bool> basket(26, false); // ek tokri type ka bna rhe jisme shuru me sab false rhega baad me sab true mark kr denge jo kaam aa jayega 
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