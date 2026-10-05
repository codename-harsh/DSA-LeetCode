class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b) {
        if(a[0] == b[0]) return a[1] > b[1];
        else 
            return a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& v) {
        int n = v.size(), c = 0;
        sort(v.begin(), v.end(), cmp);
        int maxi = v[n-1][1];
        for(int i = n - 2; i >= 0; --i) {
            if(v[i][1] < maxi) ++c;
            maxi = max(v[i][1], maxi);
        }
        return c;
    }
};