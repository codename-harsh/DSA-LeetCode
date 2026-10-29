class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr) return nullptr;
        //check for p and q
        if(root->val == p->val) return p;
        if(root->val == q->val) return q;
        TreeNode*lans = lowestCommonAncestor(root->left,p,q), *rans = lowestCommonAncestor(root->right,p,q);
        if(!lans && !rans)  return nullptr;
        else if(lans && !rans)   return lans;
        else if(!lans && rans)   return rans;
        else    return root;
    }
};