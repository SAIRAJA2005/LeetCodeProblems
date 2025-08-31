// Last updated: 01/09/2025, 01:05:02
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
    int cnt = 0;
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;
        countNodes(root -> left);
        countNodes(root -> right);
        cnt++;
        return cnt;
    }
};