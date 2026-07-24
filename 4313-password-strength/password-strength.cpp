class Solution {
public:
    int passwordStrength(string password) {
        set<char> st;
        for(auto v: password) {
            st.insert(v);
        }
        string a = "";
        for(auto c: st) {
            a += c;
        }
        int ans = 0; 
        for(auto v: a) {
            if(v >= 'a' && v <= 'z') {
                ans += 1;
            } else if(v >= 'A' && v <= 'Z') {

                ans += 2;
            } else if(v >= '0' && v <= '9') {
                ans += 3;
            } else{
                ans += 5;
            }
        }
        return ans;
    }
};