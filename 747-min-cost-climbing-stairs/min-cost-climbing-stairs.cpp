class Solution {
public:
    int find(int i, vector<int> &cost, vector<int> &dp) {
        if(i == cost.size() - 1 || i == cost.size() - 2) return cost[i];
        if(dp[i] != -1) return dp[i];
        int one = cost[i] + find(i + 1, cost, dp);
        int two = cost[i] + find(i + 2, cost, dp);
        return dp[i] = min(one, two);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        int first = find(0, cost, dp);
        //dp = {};
        int second = find(1, cost, dp);
        return min(first, second);
    }
};