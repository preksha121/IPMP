void findDiff(Node* root, int &diff, int level)
{
    if (root == nullptr) {
        return;
    }
 
    if (level & 1) {
        diff += root->data;
    }
    else {
        diff -= root->data;
    }
    findDiff(root->left, diff, level + 1);
    findDiff(root->right, diff, level + 1);
}