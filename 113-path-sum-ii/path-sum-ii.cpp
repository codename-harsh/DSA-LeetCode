class Solution {
    void solve(TreeNode* root, int targetSum, vector<vector<int>>& ans,
               vector<int>& co) {
        if (!root) {
            return;
        }
        targetSum -= root->val;
        co.push_back(root->val);
        if (targetSum == 0 && !root->left && !root->right) {
            ans.push_back(co);
        }
        solve(root->left, targetSum, ans, co);
        solve(root->right, targetSum, ans, co);
        co.pop_back();
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> co;
        solve(root, targetSum, ans, co);
        return ans;
    }
};