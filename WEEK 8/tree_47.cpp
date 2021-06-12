class Solution{
  public:
    vector<int>v;
    bool printAncestors(struct Node *root, int target) 
{ 
  /* base cases */
  if (root == NULL) 
     return false; 
  
  if (root->data == target) 
     return true; 
  if ( printAncestors(root->left, target) || 
       printAncestors(root->right, target) ) 
  { 
    v.push_back(root->data);
    return true; 
  } 
  return false; 
} 
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         if(!root)
         {
             return v;
         }
        bool x= printAncestors(root,target);
        return v;
         
         
    }
};