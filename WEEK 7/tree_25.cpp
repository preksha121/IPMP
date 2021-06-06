void modifyBSTUtil(Node* root, int* sum)
{
    if (root == NULL)
        return;
    modifyBSTUtil(root->right, sum);
    *sum = *sum + root->data;
    root->data = *sum;
    modifyBSTUtil(root->left, sum);
}
 