// Last updated: 01/09/2025, 01:04:10
class Solution {
public:

    bool checkingThePartition(int i , int tar , vector<int>&nums , vector<vector<int>>&dp){
        if(tar == 0) return true;
        if(i  >= nums.size() || tar < 0) return false;
        if(dp[i][tar] != -1) return dp[i][tar];
        bool pick = false;
        if(tar >= nums[i]){
            pick = checkingThePartition(i+1 , tar - nums[i] , nums ,dp);
        }
        bool notPick = checkingThePartition(i + 1 , tar , nums ,dp);
        return dp[i][tar] = pick || notPick;
    }
    bool canPartition(vector<int>& nums) {
        int total = 0;
        for(auto i : nums) total += i;
        if(total % 2 != 0) return false;
        vector<vector<int>>dp(nums.size() , vector<int>((total / 2) + 1  , -1));
        return checkingThePartition(0 , total / 2 , nums , dp);
    }
};