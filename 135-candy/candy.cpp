class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> cd(n, 1);//distribute 1 to everyone 
        for(int i = 1; i < n; ++i) {
            if(ratings[i] > ratings[i - 1]) 
                cd[i] = cd[i - 1] + 1;
        }
        for(int i = n - 2; i >= 0; --i) {
            if(ratings[i] > ratings[i + 1])
                cd[i] = max(cd[i], cd[i+1] + 1);
        }
        return accumulate(cd.begin(), cd.end(), 0);
    }
};