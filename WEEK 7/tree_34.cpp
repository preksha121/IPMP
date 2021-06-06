int toSumTree(node *Node) 
{ 
    if(Node == NULL) 
    return 0; 
    int old_val = Node->data; 
    Node->data = toSumTree(Node->left) + toSumTree(Node->right);
    return Node->data + old_val; 
} 
  