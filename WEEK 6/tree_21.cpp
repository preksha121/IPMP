class Solution {
public: vector<int>ans;
    vector<int> LEFTSideView(TreeNode* root) {
        if(root == NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()>0)
        {
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                if(i==0)
                {
                    ans.push_back(q.front()->val);
                }
                TreeNode* node = q.front();
                q.pop();
                if(node->left!=nullptr)
                {
                    q.push(node->left);
                }
                if(node->right!=nullptr)
                {
                    q.push(node->right);
                }
                size--;
            }
        }
        return ans;
    }
};