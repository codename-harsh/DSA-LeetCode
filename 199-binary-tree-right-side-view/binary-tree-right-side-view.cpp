class Solution {
public:
    void GetRightView(TreeNode* root, vector<int>& ans, int level) {
        if(!root)   return;
        if(level == ans.size()) ans.push_back(root->val);
        //RE callz
        GetRightView(root->right, ans, level + 1);
        GetRightView(root->left, ans, level + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        int level = 0; vector<int> ans;
        GetRightView(root, ans, level);
        return ans;
    }
};