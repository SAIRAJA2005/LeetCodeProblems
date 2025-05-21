// Last updated: 21/05/2025, 16:26:40
class Solution {
public:
    void fun(vector<vector<int>>&vec , int row , int col){
        for(int i = 0 ; i < vec[0].size() ; i++){
            vec[row][i] = 0;
        }
        for(int i = 0 ; i < vec.size() ; i++){
            vec[i][col] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>res;
        res = matrix;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j] == 0){
                    fun(res , i  , j);
                }
            }
        }
        matrix.clear();
        matrix = res;
    }
};