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
private: 
    // For left subtree: normal preorder (root, left, right)
    void LeftTraversal(TreeNode* root , queue<int>& q) {
      if(root==nullptr){
        q.push(-101);
        return;
      }
      q.push(root->val);
      LeftTraversal(root->left,q);
      LeftTraversal(root->right,q);
    }

    // For right subtree: mirrored preorder (root, right, left)
    void RightTraversal(TreeNode* root , queue<int>& q) {
       if(root==nullptr){
        q.push(-101);
        return;
       }
       q.push(root->val);
       RightTraversal(root->right,q);
       RightTraversal(root->left,q);

    }

public:
    bool isSymmetric(TreeNode* root) {
      if(root==nullptr){
        return true;
      }
      queue<int>q1,q2;
      LeftTraversal(root,q1);
      RightTraversal(root,q2);

      while(q1.size()>0 && q2.size()>0){
        if(q1.front()!=q2.front()){
            return false;
        }
        q1.pop();
        q2.pop();
      }

      return q1.empty() && q2.empty(); //size nhi kar sakte ..otherwise 0 && 0 will come false 
    }
};
