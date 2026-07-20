class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> ans;
        for(auto x: emails) {
            string local, domain;
            int i = 0; // indexing maintain krnna ke liye 
            while(x[i] != '@') {
                if(x[i] == '+') 
                    break;
                if(x[i] != '.') 
                    local += x[i];
                    i++;
            }
            while(x[i] != '@') {
                i++;
            }
            domain = x.substr(i + 1);
            ans.insert(local + "@" + domain);
        }
        return ans.size();
    }
};
