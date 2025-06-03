// Last updated: 03/06/2025, 23:03:55
class Solution {
public:
    bool jumping(int i , vector<int>&nums , int n, vector<int>&dp){
        if(i >= n - 1) return true;
        if(nums[i] == 0) return false;
        if(dp[i] != -1) return dp[i];
        for(int j = 1 ; j <= nums[i] ; j++){
            if(jumping(i + j , nums, n, dp)){
                dp[i] = 1;
                return true;
            }
        }
        dp[i] = 0;
        return false;
    }
    bool canJump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return jumping(0 , nums , nums.size(), dp);
    }
};