// Last updated: 01/09/2025, 01:05:11
class Solution {
    public int robbery(int[] nums, int ind, int[] dp){
        if(ind >= nums.length){
            return 0;
        }
        if(dp[ind] != -1) return dp[ind];
        int first = nums[ind] + robbery(nums , ind + 2, dp);
        int second = robbery(nums , ind + 1, dp);
        return dp[ind] = Math.max(first , second);
    }
    public int rob(int[] nums) {
        int[] dp = new int[nums.length + 1];
        Arrays.fill(dp, -1);
        return robbery(nums, 0, dp);
    }
}