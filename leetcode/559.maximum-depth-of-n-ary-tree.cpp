/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return 0;
        }
        int c=0;
        if(!(root->children.empty())){
            for(int i=0;i<root->children.size();i++){
                int child_depth=maxDepth(root->children[i]);
                if(child_depth>c){
                    c=child_depth;
                }
            }
        }

        return ++c;
    }
};
