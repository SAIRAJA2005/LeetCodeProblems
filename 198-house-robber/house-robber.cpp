class Solution {
public:
    int findMax(int i,vector<int>&arr,vector<int>&dp){
        if(i >= arr.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int one = arr[i] + findMax(i+2,arr,dp);
        int two = findMax(i+1,arr,dp);
        return dp[i] = max(one,two);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return findMax(0,nums,dp);
    }
};