/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
map<int,int>depth,parent;
void doo(TreeNode* root,int d,int p){
    if(root==NULL){
        return;
    }
    depth[root->val]=d;
    parent[root->val]=p;
    doo(root->left,d+1,root->val);
    doo(root->right,d+1,root->val);
}
    bool isCousins(TreeNode* root, int x, int y) {
        doo(root,0,-1);
        return depth[x]==depth[y]&& parent[x]!=parent[y];
    }
};