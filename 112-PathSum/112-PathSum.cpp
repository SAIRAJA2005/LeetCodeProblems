// Last updated: 01/09/2025, 01:05:48
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        queue<pair<TreeNode*,int>>qp;
        int sm = 0;
        qp.push({root, root->val});
        while(!qp.empty()){
            TreeNode* node = qp.front().first;
            sm  = qp.front().second;
            qp.pop();
            if(!node -> left && !node->right && sm == targetSum) return true;
            if(node -> left) qp.push({node -> left , sm + node -> left -> val});
            if(node -> right) qp.push({node -> right , sm + node -> right -> val});
        }
        return false;
    }
};