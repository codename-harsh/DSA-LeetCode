class Solution {
private:
int a[1000][1000];
    int solver(vector<int>&v, vector<int>& p, int l, int r) {
        //Edge - Case
        if(l == r)
            return 0;
        if(a[l][r] != -1)
            return a[l][r];

        int ans = 0;
        // RE callzz
        for(int mid = l; mid < r; mid++) {
        int x = p[mid + 1] - p[l];
        int y = p[r+1] - p[mid +1 ];
        if(x < y) {
            ans = max(ans, x + solver(v, p, l, mid));
        } else if(x > y) {
            ans = max(ans,y + solver(v, p,  mid+1, r));
        } else {
            ans = max(ans, max(x + solver(v, p, l, mid), y + solver(v, p,  mid+1, r)));
            }
        }
        return a[l][r] = ans;
    }

public:
    int stoneGameV(vector<int>& stoneValue) {
        memset(a, -1, sizeof(a)); int n = stoneValue.size();
        vector<int> p(n+1, 0);
        for(int i =0; i< n;i++){
            p[i+1] = p[i] + stoneValue[i];
        }
        int ans = solver(stoneValue, p,  0, stoneValue.size() - 1);
        return ans;
    }
};