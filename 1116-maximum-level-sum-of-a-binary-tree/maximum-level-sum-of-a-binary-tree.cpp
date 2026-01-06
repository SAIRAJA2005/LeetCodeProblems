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
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN;
        int ans = 0 , level = 0;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            level++;
            int sm = 0;
            for(int s = q.size() ; s > 0 ; --s){
                TreeNode* node = q.front();
                q.pop();
                sm += node -> val;

                if(node -> left != NULL) q.push(node -> left);
                if(node -> right != NULL) q.push(node -> right);

            }
            if(maxSum < sm){
                maxSum = sm;
                ans = level;
            }
        }
        return ans;
    }
};