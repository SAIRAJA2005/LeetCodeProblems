// Last updated: 01/09/2025, 01:04:57
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int cnt = 0;
    public int countNodes(TreeNode root) {
        if(root == null) return 0;
        countNodes(root.left);
        countNodes(root.right);
        cnt += 1;
        return cnt;
    }
}