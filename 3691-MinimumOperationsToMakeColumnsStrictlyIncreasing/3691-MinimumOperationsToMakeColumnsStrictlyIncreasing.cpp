// Last updated: 01/09/2025, 00:57:43
class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {

        int left = 0;
        int right = grid[0].size() - 1;
        int top = 0;
        int bottom = grid.size();
        int total = 0;

        while(left <= right){
    
            for(int i = top+1; i < bottom ; i++){
    
                if(grid[i][left] <= grid[i-1][left]){
    
                    int k = grid[i-1][left] - grid[i][left] + 1 ; // 3 - 1 = 2
                    total = total + k;
                    grid[i][left] = grid[i][left] + k;
                }
            }
            left++;
            
        }
        return total;
    }
};