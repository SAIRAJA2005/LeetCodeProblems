// Last updated: 01/09/2025, 01:02:52
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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL and root2 == NULL) return true;
        if(root1 == NULL or root2 == NULL) return 0;
        if(root1 -> val != root2 -> val) return false;
        bool flip = flipEquiv(root1 -> left , root2 -> right) && flipEquiv(root1 -> right, root2 ->left);
        bool Noflip = flipEquiv(root1 -> left , root2 -> left) && flipEquiv(root1 -> right, root2 ->right);
        return flip || Noflip;
    }
};