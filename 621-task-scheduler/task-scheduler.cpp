class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> f(26, 0);
        for(char ch: tasks) {
            f[ch - 'A']++;
        }
        int maxi = *max_element(f.begin(), f.end()), c = 0;
        for(auto x: f) {
            if(x == maxi)
                    c++;
        }
        return max((int)tasks.size(), (maxi - 1)*(n + 1)+ c);
    }
};
