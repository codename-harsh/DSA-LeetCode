class Solution {
    private: 
        bool solve(vector<int>& piles, int n, int i , int p1, int p2, bool flag) {
            if(i < n)
                return p1 >= p2;
            if(flag == true) {
                return solve(piles, n, i + 1, p1 + piles[i], p2, !flag)  ||
                       solve(piles, n-1, i, p1 + piles[n], p2, !flag) ;
            } else {
                return solve(piles, n, i + 1, p1, p2 + piles[i], !flag) &&
                       solve(piles, i, n-1, p1, p2 + piles[n], !flag) ;
            }
        }
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        return solve(piles, n - 1, 0, 0, 0, true); // first 0 is index i , then p1 and p2
    }
};