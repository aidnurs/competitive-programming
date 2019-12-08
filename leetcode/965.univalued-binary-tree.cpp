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
    bool helper(TreeNode* root, int val){
        if(root==nullptr){
            return true;
        }
        bool left=true;
        bool right=true;
        if(root->left!=nullptr){
            left=helper(root->left,val);
        }
        if(root->right!=nullptr){
            right=helper(root->right,val);
        }
        return root->val==val&&left&&right;
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        return helper(root,root->val);
    }
};