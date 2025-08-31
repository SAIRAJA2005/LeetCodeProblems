// Last updated: 01/09/2025, 01:03:57
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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int x;
        while(!q.empty()){
            int s = q.size();
            for(int i = 1 ; i <= s ; i++){
                TreeNode* top = q.front();
                q.pop();
                if(i == 1) x = top -> val;
                if(top -> left) q.push(top -> left);
                if(top -> right) q.push(top -> right);
            }
        }
        return x ;
    }
};