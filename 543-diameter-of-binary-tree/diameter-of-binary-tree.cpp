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
    int diameter=0;
    int height(TreeNode*root){
        if(root==nullptr){
            return 0;
        }
        
        int lsth=height(root->left);
        int rsth=height(root->right);
        diameter=max(diameter,lsth+rsth);

        return 1+max(lsth,rsth);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        height(root);
        return diameter;
       
    }
};