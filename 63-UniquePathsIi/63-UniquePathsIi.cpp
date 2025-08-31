// Last updated: 01/09/2025, 01:06:16
class Solution {
public:
    int findThePaths(int i , int j , vector<vector<int>>&vec,vector<vector<int>>&dp){
        if(i < 0 || j < 0) return 0;
        if(vec[i][j] == 1) return 0;
        if(i == 0 && j == 0) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        int up = findThePaths(i - 1, j , vec,dp);
        int left = findThePaths(i , j - 1 , vec, dp);
        return dp[i][j] = up + left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));

        return findThePaths(obstacleGrid.size()-1,obstacleGrid[0].size()-1,obstacleGrid,dp);
    }
};