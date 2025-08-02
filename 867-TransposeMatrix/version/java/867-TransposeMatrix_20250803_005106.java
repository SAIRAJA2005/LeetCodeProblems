// Last updated: 03/08/2025, 00:51:06
class Solution {
    public int[][] transpose(int[][] matrix) {
        int row  = matrix.length;
        int col = matrix[0].length;
        int result[][] = new int[col][row];
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
}