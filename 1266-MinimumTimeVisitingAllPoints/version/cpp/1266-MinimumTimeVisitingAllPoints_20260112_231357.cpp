// Last updated: 12/01/2026, 23:13:57
1class Solution {
2public:
3    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
4        int ans = 0;
5        for(int i = 1; i < points.size(); i++) {
6            ans += max(abs(points[i][0] - points[i - 1][0]), abs(points[i][1] - points[i - 1][1]));
7        }
8        return ans;
9    }
10};