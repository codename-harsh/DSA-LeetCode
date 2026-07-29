class Solution {
private:
    void helper(vector<int>&v, int&n, int&ans, int idx) {
        //base case
        if(idx == n + 1){
            ans++; return;
        }
        //RE
        for(int i = 1; i<=n; i++) {
            if(v[i] == 0 && (idx % i ==0 || i % idx == 0)) {
                v[i] = idx;
                helper(v, n, ans, idx + 1);
                //Back tracing
                v[i] = 0;
            }
        }
    }

public:
    int countArrangement(int n) {
        vector<int> v(n + 1);
        int ans = 0; 
        helper(v, n, ans, 1); // we'll start the indexing from 1 as mentioned in the ques
        return ans;
    }
};