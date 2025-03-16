class Solution {
public:
    int findTriangle(int i , int j , vector<vector<int>>&triangle,vector<vector<int>>&dp){
        if(i == triangle.size() - 1) return triangle[i][j];
        if(dp[i][j] != -1) return dp[i][j];
        int one = triangle[i][j] + findTriangle(i + 1 , j , triangle ,dp);
        int two = triangle[i][j] + findTriangle(i + 1 , j + 1 , triangle , dp);
        return dp[i][j] = min(one , two);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>>dp(triangle.size(),vector<int>(triangle.size(),-1));
        return findTriangle(0,0,triangle,dp);
    }
};