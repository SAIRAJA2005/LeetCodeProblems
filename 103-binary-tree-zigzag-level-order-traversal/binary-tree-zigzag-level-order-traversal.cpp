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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*>q ;
        q.push(root);
        vector<vector<int>>vec;
        int i = 0;
        while(!q.empty()){
            int n = q.size();
            vector<int>arr;
            i++;
            for(int j = 0 ; j < n ; j++){
                TreeNode* newNode = q.front();
                q.pop();
                arr.push_back(newNode -> val);
                if(newNode -> left != NULL) q.push(newNode -> left);
                if(newNode -> right != NULL) q.push(newNode -> right);
            }
            if(i % 2 == 0){
                reverse(arr.begin(),arr.end());
            }
            vec.push_back(arr);
        }
        return vec;
    }
};