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
    bool dfs(TreeNode* root, long long lower, long long upper) {
        if (root == nullptr) {
            return true;
        }
        if (root->val <= lower || root->val >= upper) {
            return false;
        }
        bool rightValid = dfs(root->right, root->val, upper);
        bool leftValid = dfs(root->left, lower, root->val);
        return leftValid && rightValid;
    }
    bool isValidBST(TreeNode* root) { return dfs(root, LLONG_MIN, LLONG_MAX); }
};
