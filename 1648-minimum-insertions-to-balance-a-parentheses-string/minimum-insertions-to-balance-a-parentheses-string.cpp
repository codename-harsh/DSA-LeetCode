class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push('(');
            } else {
                if (st.empty()) {
                    if (i != s.length() - 1 && s[i + 1] == ')') {
                        c++;
                        i++;
                    } else {
                        c += 2;
                    }
                } else {
                    if (i != s.length() - 1 && s[i + 1] == ')') {
                        st.pop();
                        i++;
                    } else {
                        c++;
                        st.pop();
                    }
                }
            }
        }
        return c + st.size() * 2; // each unmatched shit neds 2
    }
};