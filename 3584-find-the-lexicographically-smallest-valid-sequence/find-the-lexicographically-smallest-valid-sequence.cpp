class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<int> l(m, -1);
        //so firstly i wanna compare word2 with word 1 startin from the rightmost idx
        for(int i = n - 1, j = m - 1; i >= 0 && j >= 0; i--) {
            if(word1[i] == word2[j]) {
                l[j] = i;
                j--;
            }
        }
        vector<int> ans(m);
        bool f = true;
        int j = 0;
        for(int i = 0; i < n && j < m; i++) {
            if(word1[i] == word2[j]) {
                //exact wahi hai
                ans[j++] = i;
            } else if(f && (j == m - 1 || i < l[j + 1])){
                 // same to nahi hai but ek change allowed hai 
                 ans[j++] = i;
                 f = false;
            }
        }
        if(j == m) 
            return ans;
        else return vector<int> {};
    }
};