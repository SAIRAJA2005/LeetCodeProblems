// Last updated: 04/06/2025, 23:08:17
// Jumping !! 2
class Solution {
public:
    int jumping(int i, vector<int>& nums, vector<int>&dp) {
        int n = nums.size();
        if (i >= n - 1) return 0;
        if (nums[i] == 0) return 1e9;
        if(dp[i] != -1) return dp[i];
        int minJumps = 1e9;
        for (int j = 1; j <= nums[i]; j++) {
            minJumps = min(minJumps, 1 + jumping(i + j, nums, dp));
        }

        return dp[i] = minJumps;
    }

    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return jumping(0 , nums , dp);
    }
};