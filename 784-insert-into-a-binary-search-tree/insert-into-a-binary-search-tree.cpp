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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
       if(root==nullptr){
        TreeNode* newNode= new TreeNode(val);
        return newNode;
       }
       TreeNode* temp=root;
       while(root!=nullptr){
          
        if(val>temp->val){
           if(temp->right==nullptr){
            temp->right=new TreeNode(val);
            return root ;
           }
           else{
            temp=temp->right;
           }
        }
        else{
            if(temp->left==nullptr){
                temp->left=new TreeNode(val);
                return root;
            }
            else{
                temp=temp->left;
            }
        }
       }
       return root;
    }
};