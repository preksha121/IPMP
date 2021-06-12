bool printPath(node* root,
               node* target_leaf)
{
    if (root == NULL)
        return false;
    if (root == target_leaf || printPath(root->left, target_leaf) || 
                               printPath(root->right, target_leaf)) {
        cout << root->data << " ";
        return true;
    }
  
    return false;
}