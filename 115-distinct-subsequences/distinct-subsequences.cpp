class Solution {
public:
    int numDistinct(string s, string t) {
        int m =s.size(), n=t.size();
        vector<unsigned int> prev(n+1,0),cur(n+1,0);
        prev[0]=1; cur[0]=1;
        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++) {
                if(s[i-1]==t[j-1])
                    cur[j]=prev[j-1]+prev[j];
                else
                    cur[j]=prev[j];
            } 
            prev=cur;           
        }
        return prev[n];
    }
};