class Solution {
private:
    bool isSquare(int n) {
        int x = sqrt(n);
        return x*x == n;
    }

    bool solver(int n, vector<int>&v) {
        if(n == 0) 
            return false;
        if(v[n] != -1) 
            return v[n];
        for(int i = 1; i*i <= n; i++) {
            if(!solver(n - i*i, v))
                return v[n] = true;
        }
        return v[n] = false;
    }

public:
    bool winnerSquareGame(int n) {
        if(n == 1) return true;
        vector<int> v(n+1, -1);
        return solver(n, v);
    }
};