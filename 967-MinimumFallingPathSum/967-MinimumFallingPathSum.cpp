// Last updated: 01/09/2025, 01:02:57
class Solution {
public:
    int minPath(int i , int j , vector<vector<int>>&matrix , vector<vector<int>>&dp){
        if(j < 0 || j >= matrix[0].size()) return 1e9;
        if(i == matrix.size()-1) return matrix[i][j];
        if(dp[i][j] != INT_MAX) return dp[i][j];
        int left = matrix[i][j] + minPath(i + 1 , j , matrix,dp);
        int direct = matrix[i][j] + minPath(i + 1 , j - 1 , matrix,dp);
        int up = matrix[i][j] + minPath(i + 1 , j + 1 , matrix,dp);
        return dp[i][j] = min(up,min(left,direct)); 
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
        int mini = INT_MAX;
        for(int j = 0 ; j < m ; j++){
            int ans = minPath(0 , j , matrix , dp);
            mini = min(ans,mini);
        }
        return mini;
    }

};