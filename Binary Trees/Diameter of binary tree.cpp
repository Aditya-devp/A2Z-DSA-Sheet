class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return;
int maxi=0;
        int l=1+diameterOfBinaryTree(root->left);
        int r=1+diameterOfBinaryTree(root->right);
maxi=max(maxi,l+r);
     diameterOfBinaryTree(root->left);
     diameterOfBinaryTree(root->right);
        
    }
};
