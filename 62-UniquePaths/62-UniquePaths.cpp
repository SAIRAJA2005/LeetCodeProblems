// Last updated: 01/09/2025, 01:06:17
class Solution {
public:
    // int findUniquePaths(int rows , int col,vector<vector<int>>&dp){
    //     if(rows == 0 && col == 0) return 1;
    //     if(rows < 0 || col < 0) return 0;
    //     if(dp[rows][col] != -1) return dp[rows][col];
    //     int up = findUniquePaths(rows - 1 , col , dp);
    //     int left = findUniquePaths(rows , col - 1 ,dp);
    //     return dp[rows][col] = up + left;
    // }

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));

        dp[0][0] = 1;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i == 0 && j == 0){
                    dp[0][0] = 1;
                }
                else{
                    int up = 0 , left = 0;
                    if(i > 0) up = dp[i-1][j];
                    if(j > 0) left = dp[i][j-1];
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1];
    }
};