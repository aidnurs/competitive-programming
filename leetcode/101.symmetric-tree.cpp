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
    bool helper(TreeNode* left,TreeNode* right){
        if(left==nullptr&&right==nullptr){
            return true;
        }else{
            if(left==nullptr||right==nullptr){
                return false;
            }
        }
        bool l=true;
        bool r=true;
        l=helper(left->left,right->right);
        r=helper(left->right,right->left);
        return left->val==right->val&&l&&r;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        return helper(root->left,root->right);; 
    }
};