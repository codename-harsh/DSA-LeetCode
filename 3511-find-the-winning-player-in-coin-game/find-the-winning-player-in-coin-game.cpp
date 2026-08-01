class Solution {
public:
    string winningPlayer(int x, int y) {
        int c = 0;
        while(x > 0 && y > 3) {
            x -= 1;
            y -= 4;
            c++;
        }
        return c%2 == 1 ? "Alice" : "Bob";
    }
};

