class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for(auto&x: s) {
            if(x == ']') {
                string w = "";
                while(!st.empty() && !isdigit(st.top()[0])) {
                    string tp = st.top();
                    w += tp == "[" ? "" : tp;
                     st.pop();
                }
                string v = ""; //Numeric string
                while(!st.empty() && isdigit(st.top()[0])) {
                    v += st.top();
                    st.pop();
                }
                reverse(v.begin(), v.end());
                int n = stoi(v);
                //final decoding : 
                string curr = "";
                while(n--)  curr += w;
                st.push(curr);
            } else {
                string t(1, x);
                st.push(t);
            }
        }
        //Now everything's done, just pop the strings from stack and add into string then return ;D
        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};