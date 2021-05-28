/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
class Solution {
public:
  vvi res;
    
    void pop(TreeNode *root,int depth) {
        if(!root)return;
        res[depth].push_back(root->val);
        pop(root->left,depth+1);
        pop(root->right,depth+1);
    }
    int depth(TreeNode * root){
        if(!root)return 0;
        return max(depth(root->left),depth(root->right))+1;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        res = vvi(depth(root));
        pop(root,0);
        return res;    
    }
};