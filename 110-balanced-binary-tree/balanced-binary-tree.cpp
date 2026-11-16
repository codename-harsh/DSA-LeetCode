class Solution {
public:
    bool flag = true;
    int height(TreeNode* root) {
        if(!root)   return 0;
        int l = height(root->left), r = height(root->right);
        //check condn
        if(flag && abs(l - r) > 1) 
            flag = false;
        return max(l, r) + 1;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return flag;
    }
};