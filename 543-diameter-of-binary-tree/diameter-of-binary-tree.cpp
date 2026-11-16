class Solution {
public:
int d;
    int height(TreeNode* root) {
        if(!root) return 0;
        int l = height(root->left), r = height(root->right);
        int curr = l + r;
        d = max(d, curr);
        return 1 + max(l, r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return d;
    }
};