class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st; int c = 0;
        for(const auto& x: s) {
            if(x == '(') {
                st.push(c);
                c = 0;
            } else      c = st.top() + max(2*c, 1), st.pop();
        }
        return c;
    }
};