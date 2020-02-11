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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0){
            return nullptr;
        }
        if(nums.size()==1){
            return new TreeNode(nums[0]);
        }
        int middle=nums.size()/2;
        vector<int> leftnums(nums.begin(),nums.begin()+middle);
        vector<int> rightnums(nums.begin()+middle+1,nums.end());
        
        TreeNode* root=new TreeNode(nums[middle]);
        
        root->left=sortedArrayToBST(leftnums);
        root->right=sortedArrayToBST(rightnums);
        
        return root;
    }
};