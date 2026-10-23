class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        //Brute Force soln : 
        int n = matrix.size();
        vector<int> ans;
        for(int i = 0; i  < n; ++i) {
            for(int j = 0; j < n; ++j) {
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[k - 1];
    }
};