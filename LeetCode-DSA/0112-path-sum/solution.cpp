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
    bool dfs(TreeNode* root, int targetSum)
    {
        
        if(root ==nullptr)
        {
            return false;
        }
        bool left=dfs(root->left,targetSum-root->val);
        bool right=dfs(root->right,targetSum-root->val);
        
        if(root->left==nullptr && root->right==nullptr)
        {
            return root->val == targetSum;
        }
        return left||right;        
    }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        return dfs(root, targetSum);
    }
};
