class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st; string ans = "/", word;
        int s = path.length(), i = 0, j = 0;
        while(i < s) {
            while(i < s && path[i] == '/') ++i;
            j = i;
            while(j < s && path[j] != '/') ++j;
            word = path.substr(i, j - i);
            i = j;
            if(word == ".") continue;
            if(word == "..") {
                if(!st.empty()) st.pop();
            } else
                st.push(word);
        }
        while(!st.empty()) {
            ans.insert(1, st.top() + '/');
            st.pop();
        }
        while(ans.size() > 1 && ans.back() == '/')
            ans.pop_back();
        return ans;
    }
};