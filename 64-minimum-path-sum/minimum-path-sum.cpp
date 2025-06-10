class Solution {
public:

    int findThePath(int i , int j , vector<vector<int>>&grid , vector<vector<int>>&dp){
        if(i == 0 && j == 0) return grid[i][j];
        if(i < 0 || j < 0) return 1e9;
        if(dp[i][j] != -1) return dp[i][j];
        int up = grid[i][j] + findThePath(i - 1 , j , grid , dp);
        int left = grid[i][j] + findThePath(i , j - 1 , grid , dp);
        return dp[i][j] = min(up , left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return findThePath(grid.size() - 1, grid[0].size() - 1 , grid , dp);
    }
    
};