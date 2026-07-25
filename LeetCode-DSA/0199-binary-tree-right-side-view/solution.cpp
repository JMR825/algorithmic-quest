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
    void dfs(TreeNode* root,int level,vector<int>& path)
    {
        if(root==nullptr) return;
        if(level==path.size())
        {
            path.push_back(root->val);
        }
        
        dfs(root->right,level+1,path);
        dfs(root->left,level+1,path);
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> path;
        int level=0;
        dfs(root,level,path);
        return path;   
    }
};
