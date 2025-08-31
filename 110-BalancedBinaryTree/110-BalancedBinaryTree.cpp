// Last updated: 01/09/2025, 01:05:49
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
    int mh(TreeNode* root){
        if(root == NULL) return 0;
        int lh = mh(root->left);
        int rh = mh(root->right);
        if(lh == -1 || rh == -1) return -1;
        if(abs(lh-rh) > 1) return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(mh(root) == -1) return false;
        return true;
    }
};