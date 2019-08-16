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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root->val==val){
            return root;
        }

        if(root->left==NULL&&root->right==NULL){
            return NULL;
        }
        if(root->left!=NULL){
            TreeNode* left_search=searchBST(root->left,val);
            if(left_search!=NULL){
                return left_search;
            }
        }
        if(root->right!=NULL){
            TreeNode* right_search=searchBST(root->right,val);
            if(right_search!=NULL){
                return right_search;
            }
        }

        return NULL;
    }
};
