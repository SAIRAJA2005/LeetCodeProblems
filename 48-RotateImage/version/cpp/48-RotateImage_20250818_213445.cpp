// Last updated: 18/08/2025, 21:34:45
class Solution {
public:
    void callMeBro(vector<vector<int>>&mat, int i , int j){
        for(int start = i ; start < mat[0].size() ; start++){
            swap(mat[start][j], mat[j][start]);
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int i = 0;
        int j = 0;
        while(i <= j && j < matrix.size()){
            callMeBro(matrix, i , j);
            i++;
            j++;
        }
        for(i = 0 ; i < matrix.size() ; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};