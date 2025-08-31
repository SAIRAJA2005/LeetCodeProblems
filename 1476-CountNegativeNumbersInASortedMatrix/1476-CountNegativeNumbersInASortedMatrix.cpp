// Last updated: 01/09/2025, 01:02:05
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                if (grid[i][j] < 0) cnt++;
            }
        }
        return cnt;
    }
};