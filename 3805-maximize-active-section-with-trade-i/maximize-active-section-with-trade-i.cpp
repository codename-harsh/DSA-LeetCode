class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        //Gain = Left zeroes + Right zeroes !!!!
        int ones = 0;
        for(auto v: s){
            if(v == '1'){
                ones++;
            }
        }
        s = "1" + s + "1";
        int i = 0, n = s.size(), ans = ones;
        // skipin first 1's
        while( i < n && s[i] == '1') {
            i++;
        }
        //First 0's block
        int fz = 0;
        while(i < n && s[i] == '0') {
            fz++; i++;
        }
        while(i < n) {
            //Middle 1's block
            int m1 = 0;
            while(i < n && s[i] == '1'){
                m1++; i++;
            }
            if(m1 == 0)
                break;
            //Rightmost 0's block
            int rz = 0;
            while(i < n && s[i] == '0') {
                rz++; i++;
            }
            if(rz == 0)
                break;

            ans = max(ans, ones + fz +rz);
                fz = rz; // sliding the window !
        }
        return ans;
    }
};