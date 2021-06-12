node* removeOutsideRange(node *root, int min, int max)
{
   if (root == NULL)
      return NULL;
   root->left =  removeOutsideRange(root->left, min, max);
   root->right =  removeOutsideRange(root->right, min, max);
   if (root->key < min)
   {
       node *rChild = root->right;
       delete root;
       return rChild;
   }
   if (root->key > max)
   {
       node *lChild = root->left;
       delete root;
       return lChild;
   }
   return root;
}