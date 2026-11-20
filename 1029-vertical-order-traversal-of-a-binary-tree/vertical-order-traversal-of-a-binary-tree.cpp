class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        ios::sync_with_stdio(false);//for faster processing ;-)
        cin.tie(nullptr), cout.tie(nullptr);

        vector<vector<int>> ans;
        queue<pair<TreeNode*, pair<int, int>>> q; // node, {row, colm}
        q.push({root, {0, 0}});
        map<int, map<int, multiset<int>>> mp; //col -> {row: [x, y, z, ....]}
        while(!q.empty()) {
            auto f = q.front(); q.pop();
            TreeNode*&node = f.first;
            auto &coord = f.second;
            int&row = coord.first, &col = coord.second;
            mp[col][row].insert(node->val);
            if(node->left)
                q.push({node->left, {row + 1, col - 1}});
            if(node->right)
                q.push({node->right, {row + 1, col + 1}});
        }
        for(auto it: mp) {
            auto &cm = it.second;
            vector<int> v;
            for(auto x: cm) {
                auto & ms= x.second;
                v.insert(v.end(), ms.begin(), ms.end());
            }
            ans.push_back(v);
        }
        return ans;
    }
};