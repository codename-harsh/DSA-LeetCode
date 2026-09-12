class Solution {
public:
    //BIG POTATO STUFF 
    string removeDuplicates(string s) {
        stack<char> st;
        for(const auto&x: s) {
            if(!st.empty() && st.top() == x) {
                st.pop(); // we dont want this guy
            } else {
                st.push(x); // yeah we love this one :D
            }
        }
        //add the stack guys to string and then reverse to get answer !
        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }


    // SMALL POTATO STUFF 
    
    // string removeDuplicates(string s) {
    //         int i = 0;
    //         string ans = "";
    //         while(i < s.length())
    //         {
    //             if(ans.length() > 0)
    //             {
    //                 if(ans[ans.length()-1] == s[i]){
    //                     ans.pop_back();
    //                 }
    //                 else{
    //                     ans.push_back(s[i]);
    //                 }
    //             }
    //                 else{ //If ans is empty then directly insert the first element of s
    //                     ans.push_back(s[i]);
    //                 }
    //                 i++;
    //         }
    //         return ans;
    // }
};