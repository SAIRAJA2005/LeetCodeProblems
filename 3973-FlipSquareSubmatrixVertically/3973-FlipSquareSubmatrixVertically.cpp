// Last updated: 27/12/2025, 21:42:20
class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
            for(int i = 0; i < k / 2; i++){
            int peak = x + i;
            int down = x + k - 1 - i;
            for(int col = 0; col < k; col++){
                swap(grid[peak][y+col], grid[down][y+col]);
            }
        }
        return grid;    
    }
};