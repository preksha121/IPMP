class Solution {
public:
    void helper(TreeNode *root,TreeNode **prev,TreeNode **first,TreeNode **second)
    {
        if(!root)
        {
            return;
        }
        helper(root->left,&(*prev),&(*first),&(*second));
        if((*prev)->val>root->val && !(*first))
        {
            (*first)=(*prev);
        }
        if((*prev)->val>root->val)
        {
            (*second)=root;
        }
        (*prev)=root;
        helper(root->right,&(*prev),&(*first),&(*second));
    }
    void recoverTree(TreeNode* root)
    {
        TreeNode *first=NULL,*second=NULL,*prev=new TreeNode(INT_MIN);
        helper(root,&prev,&first,&second);
        swap(first->val,second->val);
    }
};