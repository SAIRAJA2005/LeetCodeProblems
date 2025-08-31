// Last updated: 01/09/2025, 01:05:03
class Solution {
public:
    int rec(int idx , vector<int>&nums, int k , vector<int>&dp){
        if(idx > k) return 0;
        if(dp[idx] != -1) return dp[idx];
        int one = nums[idx] + rec(idx + 2 , nums , k ,dp);
        int two = rec(idx + 1 , nums , k ,dp);
        return dp[idx] = max(one , two);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1) return nums[0];
        vector<int> dp1(n, -1), dp2(n, -1);
        return max(rec(0 , nums , nums.size() - 2 , dp1) , rec(1 , nums ,nums.size() - 1 ,dp2));
    }
};