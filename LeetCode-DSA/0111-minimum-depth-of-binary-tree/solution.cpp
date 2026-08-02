/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root)
    {
        int depth=0;
        if(root==nullptr) return 0;
        int leftHeight=dfs(root->left);
        int rightHeight=dfs(root->right);
        
        if(leftHeight==0) return rightHeight+1;
        if(rightHeight==0) return leftHeight+1;

        return 1+min(leftHeight,rightHeight);
    }
    int minDepth(TreeNode* root) 
    {
        return dfs(root);
    }
};
