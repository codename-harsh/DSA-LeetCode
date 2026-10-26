class Solution {
public:
    int height(TreeNode* root) {
        if(root == 0)   return 0;
        int l = height(root->left), r = height(root->right);
        return 1 + max(l, r);
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return 1;
        int l = height(root->left), r = height(root->right);
        int diff = abs(l - r);
        bool ans1 = (diff <= 1);
        //RE
        bool lans = isBalanced(root->left), rans = isBalanced(root->right);
        if(ans1 && lans && rans)    return true;
        else return false;
    }
};