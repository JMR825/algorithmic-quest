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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        bool isReversed= true;
        while(!q.empty())
        {
            int levelSize=q.size();
            vector<int>level;
            for(int i=0;i<levelSize;i++)
            {
                TreeNode* current = q.front();
                q.pop();
                level.push_back(current->val);
                if(current->left!=nullptr)
                q.push(current->left);
                if(current->right!=nullptr)
                q.push(current->right);
                
            }
            if(!isReversed)
            {
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            isReversed=!isReversed;
        }
        return ans;
    }
};
