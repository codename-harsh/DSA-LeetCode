class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> v;
        string cur;
        for(int i = 0 ; i < s.size() ; ++i){
            if(s[i] == '('){
                v.push(cur);
                cur = "";
            } else if(s[i] == ')'){
                reverse(cur.begin(),cur.end());
                cur =  v.top()+cur;
                v.pop();
            } else cur += s[i];
        }
        return cur;
    }
};