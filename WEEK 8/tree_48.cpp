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
class Solution {
public:
     TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        
        TreeNode* root = re(nums, 0,  nums.size()-1);
        return root;
    }
    
    TreeNode* re (vector<int> &nums, int lo, int hi) {
        if(lo > hi) return NULL;
        int mid=(lo+hi)>>1;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left=re(nums,lo,mid-1);
        root->right=re(nums,mid+1,hi);
        return root;
    }
};