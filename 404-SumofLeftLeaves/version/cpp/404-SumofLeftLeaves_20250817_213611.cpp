// Last updated: 17/08/2025, 21:36:11
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
    int sm = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;
        if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
            sm += root->left->val; 
        }
        sumOfLeftLeaves(root -> left);
        sumOfLeftLeaves(root -> right);
        return sm;
    }
};