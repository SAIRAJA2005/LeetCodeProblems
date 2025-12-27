// Last updated: 27/12/2025, 21:42:11
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int res = INT_MAX;
        for(int i = 0, n = tasks.size(); i < n; ++i){
            int time = tasks[i][0] + tasks[i][1];
            res = min(res , time);
        }
        return res;
    }
};