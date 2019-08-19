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
    int maxDepth(TreeNode* root) {
        int c=0;
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL&&root->right==NULL){
            return ++c;
        }
        if(root->left!=NULL){
            c=maxDepth(root->left);
        }
        if(root->right!=NULL){
            int right_depth=maxDepth(root->right);
            if(right_depth>c){
                c=right_depth;
            }
        }
        return ++c;
    }
};
