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
public: int total=0;
public:
    void rec(TreeNode* root,int min,int max){
        if(!root){
            return;
        }
        if(root->left){
            rec(root->left,min,max);
        }
        if(root->right){
            rec(root->right,min,max);
        }
        if(root->val<max&&root->val>min){
            total+=root->val;
        }
    }
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        total=0;
        int min=L<R?L:R;
        int max=L<R?R:L;
        rec(root,min,max);
        total+=L+R;
        return total;
    }
};
