// Last updated: 27/08/2025, 11:38:23
class Solution {
public:
    /* Memoiation */
    // int dpFun(int n ,vector<int>&dp){
    //     if(n == 0 || n == 1) return 1;
    //     if(dp[n] != -1){
    //         return dp[n];
    //     }
    //     return dp[n] = dpFun(n-1,dp) + dpFun(n-2,dp);
    // }
    int climbStairs(int n) {

        /*Tabulation*/
        
        // vector<int>dp(n + 1);
        // /*dp[0] = 1;
        // dp[1] = 1;
        // for(int i = 2 ; i <= n ; i++){
        //     dp[i] = dp[i - 1] + dp[i - 2];
        // }
        // return dp[n];

        /*Space Optimization*/
        int prev1 = 1;
        int prev2 = 1;
        int curr = 0;
        for(int i = 2 ; i <= n ; i++){
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};