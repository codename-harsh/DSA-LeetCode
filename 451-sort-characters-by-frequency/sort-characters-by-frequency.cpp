class Solution {
public:
    //total ascii chars - 128
    static vector<int> f;
    static bool cmp(char a, char b) {
        if(f[a] == f[b])
        return a > b;
        return f[a] > f[b];
    }
    string frequencySort(string s) {
        f.assign(128, 0);
        for(char &ch : s)   f[ch]++;
        sort(s.begin(), s.end(), cmp);
        return s;
    }
};
vector<int> Solution :: f;