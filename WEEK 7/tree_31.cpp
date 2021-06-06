
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls, rs) + 1;
}

bool isHeightBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    bool isLeftBalanced = isHeightBalanced(root->left);
    bool isRightBalanced = isHeightBalanced(root->right);
    if (abs(leftHeight - rightHeight) <= 1 && isLeftBalanced && isRightBalanced)
    {
        return true;
    }
    return false;
}

 