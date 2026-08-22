class Solution {
public:
    int balancedStringSplit(string s) {
        int count =0;
        int nor = 0;
        int nol = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == 'R') nor++;
            else nol++;
            if(nor == nol) count ++;
        }
        return count;
    }
};