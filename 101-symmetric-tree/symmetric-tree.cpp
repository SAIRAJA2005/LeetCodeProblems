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
    bool findMe(TreeNode* leftHand, TreeNode* rightHand) {
        if (!leftHand && !rightHand) return true;             
        if (!leftHand || !rightHand) return false;            
        if (leftHand->val != rightHand->val) return false;     
        return findMe(leftHand->left, rightHand->right) && 
               findMe(leftHand->right, rightHand->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return findMe(root->left, root->right);
    }
};