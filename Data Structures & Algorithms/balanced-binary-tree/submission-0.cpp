class Solution {
public:
    int height(TreeNode* root){
        if(!root) return 0;
        int l = height(root->left);
        int r = height(root->right);
        if(l==-1 || r==-1) return -1;
        if(abs(l-r) >1) return -1;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(height(root) == -1) return false;
        return true;
    }
};