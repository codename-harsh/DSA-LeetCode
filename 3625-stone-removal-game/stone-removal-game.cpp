class Solution {
private:
    bool solver(int n, int x, int t) {
        if(n < x)   
            return false;
        return !solver(n-x, x - 1, t ^ 1);
    }

public:
    bool canAliceWin(int n) {
        int x = 10;
        if(n < 10)
            return false;
        return solver(n, 10, 0);
    }
};