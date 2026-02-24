int dfs(struct TreeNode* node, int current_value)
{
    if (node == NULL)
        return 0;

    current_value = current_value * 2 + node->val;

    if (node->left == NULL && node->right == NULL)
        return current_value;

    return dfs(node->left, current_value) +
           dfs(node->right, current_value);
}

int sumRootToLeaf(struct TreeNode* root)
{
    return dfs(root, 0);
}
