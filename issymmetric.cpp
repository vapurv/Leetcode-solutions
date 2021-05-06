class Solution {
public:
    bool solve(TreeNode* root1,TreeNode *root2)
    {
        if(root1==NULL and root2==NULL)
        {
            return true;
        }
        if (root1 && root2 && root1->val== root2->val)
        return solve(root1->left, root2->right)
               && solve(root1->right, root2->left);
 
   
    return false;
    }
    bool isSymmetric(TreeNode* root) {
        return solve(root,root);
        
        
    }
};