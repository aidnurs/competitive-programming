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
    int countNodes(TreeNode* root) {
        int c=0;
        if(root==nullptr){
            return c;
        }
        if(root->left!=nullptr){
            c+=countNodes(root->left);
        }
        if(root->right!=nullptr){
            c+=countNodes(root->right);
        }
        return ++c;
    }
};