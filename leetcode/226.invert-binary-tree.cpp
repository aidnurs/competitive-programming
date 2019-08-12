/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root!=NULL){
            TreeNode tmp(NULL);
            if(root->left!=NULL){
                if (root->right!=NULL) {
                    invertTree(root->left);
                    invertTree(root->right);
                    tmp=*(root->left);
                    *(root->left)=*(root->right);
                    *(root->right)=tmp;

                }else{
                    root->right=root->left;
                    root->left=NULL;
                    invertTree(root->right);
                }
            }else{
                if (root->right!=NULL) {
                    root->left=root->right;
                    root->right=NULL;
                    invertTree(root->left);
                }
            }
        }
        return root;
    }
};
