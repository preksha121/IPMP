void connect(struct Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL); 
    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        if (p != NULL) {
            p->nextRight = q.front();

            if (p->left)
                q.push(p->left); 
            if (p->right)
                q.push(p->right);
        } 
        else if (!q.empty()) 
            q.push(NULL); 
    }
}
struct Node* newnode(int data)
{
    struct Node* node = (struct Node*)
                         malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = node->nextRight = NULL;
    return (node);
}