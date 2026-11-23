class Solution {
public:
    int ans = INT_MIN;
    int solve(TreeNode*root) {
        if(!root) return 0;
        int l = max(0, solve(root->left));
        int r = max(0, solve(root->right));
        ans = max(ans, root->val + l+r);
        return root->val + max(l, r);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
    }
};