void reverseLevelOrder(node* root) 
{ 
    int h = height(root); 
    int i; 
    for (i=h; i>=1; i--) `
        printGivenLevel(root, i); 
} 
void printGivenLevel(node* root, int level) 
{ 
    if (root == NULL) 
        return; 
    if (level == 1) 
        cout << root->data << " "; 
    else if (level > 1) 
    { 
        printGivenLevel(root->left, level - 1); 
        printGivenLevel(root->right, level - 1); 
    } 
} 