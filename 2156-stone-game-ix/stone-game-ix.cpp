class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int z = 0, one = 0, t = 0;
        for(auto x: stones) {
            int r = x % 3;
            if(r == 0) z++;
            else if(r == 1) one++;
            else if(r == 2) t++;
        }
        if(z % 2 == 0) 
            return one > 0 && t > 0;
        else 
            return abs(one - t) > 2;
    }
};