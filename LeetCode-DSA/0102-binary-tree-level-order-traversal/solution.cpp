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
#include<queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>> result;
        if(root==nullptr) return result;
        queue<TreeNode*> q;
        
        q.push(root);
        
        // bfs loop
        while(!q.empty())
        {
            int level_size=q.size();
            vector<int> curr_level;
            for(int i=0;i<level_size;++i)
            {
            TreeNode* node=q.front();
            q.pop();
            curr_level.push_back(node->val);
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
            }
            result.push_back(curr_level);
        }
        return result;
    }
};
