// Last updated: 01/09/2025, 00:59:10
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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            long long size = q.size();
            long long newOne = 0;
            for(int i = 0 ; i < size ; i ++){
                TreeNode* node = q.front();
                q.pop();
                if(node -> left ){
                    q.push(node -> left);
                }
                if(node -> right ){
                    q.push(node -> right);
                }
                newOne += node -> val;
            }
            ans.push_back(newOne);
        }
        sort(ans.begin(), ans.end());
        if(ans.size() < k) return -1;
        return ans.at(ans.size() - k);  
    }
};