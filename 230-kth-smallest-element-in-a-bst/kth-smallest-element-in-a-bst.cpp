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

    vector<int> inorder(TreeNode* root) {

        vector<int> res;

        if(root == nullptr){
            return res;
        }

        vector<int> left = inorder(root->left);
        res.insert(res.end(), left.begin(), left.end());

        res.push_back(root->val);

        vector<int> right = inorder(root->right);
        res.insert(res.end(), right.begin(), right.end());

        return res;
    }

    int kthSmallest(TreeNode* root, int k) {

        vector<int> ans = inorder(root);

        return ans[k-1];
    }
};