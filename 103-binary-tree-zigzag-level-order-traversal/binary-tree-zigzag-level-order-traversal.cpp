class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        bool fg = true;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int w = q.size();
            vector<int> oneLvL(w);
            for (int i = 0; i < w; ++i) {
                TreeNode* f = q.front();
                q.pop();
                int idx = fg ? i : w - i - 1;
                oneLvL[idx] = f->val;
                if (f->left)
                    q.push(f->left);
                if (f->right)
                    q.push(f->right);
            }
            // Now changin thee direction
            fg = !fg;
            ans.push_back(oneLvL);
        }
        return ans;
    }
};