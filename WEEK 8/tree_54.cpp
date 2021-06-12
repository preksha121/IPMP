node* createTreeFromTrav(int *inOrder,int *preOrder,int s,int e){
    static int i = 0;
    //Base Case
    if(s>e){
        return NULL;
    node *root = new node(preOrder[i]);

    int index = -1;
    for(int j=s; s <= e;j++){
        if(inOrder[j] == preOrder[i]){
            index = j;
            break;
        }
    }

    i++;
    root->left = createTreeFromTrav(inOrder, preOrder, s, index-1);
    root->right = createTreeFromTrav(inOrder, preOrder, index+1, e);
    return root;
}
