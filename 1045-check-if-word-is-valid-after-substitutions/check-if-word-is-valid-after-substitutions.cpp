class Solution {
public:
    bool isValid(string s) {//pair - up strategy
        if(s[0] != 'a') return 0;
        stack<char> st;
        for(const auto&x: s) {
            if(x == 'a') 
                st.push(x);
            else if(x == 'b') {
                    if(!st.empty() && st.top() == 'a')    st.push('b');
                    else    return false;
            } else {//x == 'c'
                    if(!st.empty() && st.top() == 'b') {
                        st.pop();
                        if(!st.empty() && st.top() == 'a')  st.pop();
                        else    return false;
                } else 
                return false;
            }
        }
        return st.empty();
    }
};

    // bool isValid(string s) {//800 ms -> RECURSIVE/Brute force approach :-(
    //     if(s.size() == 0)   return true;
    //     int f = s.find("abc");
    //     if(s.find("abc") != string::npos) {
    //         string tl = s.substr(0, f), tr = s.substr(f + 3, s.size());
    //         return isValid(tl + tr);
    //     }
    //     return false;
    // }