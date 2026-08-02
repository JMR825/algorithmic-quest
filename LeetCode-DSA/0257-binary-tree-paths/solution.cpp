/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, vector<int>& path, vector<string>& ans) {
        if (root == nullptr)
            return;
        path.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr) {
            string s = "";
            for (int i = 0; i < path.size(); ++i) {
                if (i > 0)
                    s += "->";
                s += to_string(path[i]);
            }
            ans.push_back(s);
        }
        
        else {
            dfs(root->left, path, ans);
            dfs(root->right, path, ans);
        }
        path.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        vector<int> path;
        dfs(root, path, ans);
        return ans;
    }
};
