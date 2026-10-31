class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cl = 0, cr = 0, c = 0;
        for(char &ch: moves) {
            if(ch == 'L')   ++cl;
            if(ch == 'R')   ++cr;
            if(ch == '_')   ++c;
        }
        return abs(cl - cr) + c;
    }
};  