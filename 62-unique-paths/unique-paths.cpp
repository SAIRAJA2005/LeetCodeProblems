class Solution {
public:
    int findUniquePaths(int rows , int col,vector<vector<int>>&dp){
        if(rows == 0 && col == 0) return 1;
        if(rows < 0 || col < 0) return 0;
        if(dp[rows][col] != -1) return dp[rows][col];
        int up = findUniquePaths(rows - 1 , col , dp);
        int left = findUniquePaths(rows , col - 1 ,dp);
        return dp[rows][col] = up + left;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return findUniquePaths(m-1,n-1,dp);
    }
};