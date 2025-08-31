// Last updated: 01/09/2025, 01:03:52
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
    int findingDiameter(TreeNode* root , int& maxi){
        if(root == NULL) return 0;
        int lh = findingDiameter(root -> left , maxi);
        int rh = findingDiameter(root -> right , maxi);
        maxi = max(maxi , lh + rh);
        return 1 + max(lh , rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        findingDiameter(root , maxi);
        return maxi;
    }
};