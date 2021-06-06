bool isFoldable(node* root)
{
    bool res;
 
    if (root == NULL)
        return true;
    mirror(root->left);
    res = isStructSame(root->left, root->right);
    mirror(root->left);
 
    return res;
}
 
bool isStructSame(node* a, node* b)
{
    if (a == NULL && b == NULL) {
        return true;
    }
    if (a != NULL && b != NULL && isStructSame(a->left, b->left) && isStructSame(a->right, b->right)) {
        return true;
    }
 
    return false;
}