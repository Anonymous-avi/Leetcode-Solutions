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
    bool check(TreeNode* root , long long minV , long long maxV){
        if(root==nullptr){
            return true;
        }
        if(root->val<=minV || root->val>=maxV){
            return false;
        }
       return check(root->left,minV,root->val) && check(root->right , root->val , maxV);

    }

public:
    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MIN , LONG_MAX);
        
    }
};