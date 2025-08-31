// Last updated: 01/09/2025, 01:06:05
class Solution {
    public boolean wordSearch(char[][] board, String word, int ind, int row, int col){
        if(ind == word.length()) return true;
        if (row < 0 || col < 0 || row >= board.length || col >= board[0].length) return false;
        if (board[row][col] != word.charAt(ind)) return false;
        char temp = board[row][col];
        board[row][col] = '#';
        boolean found = wordSearch(board, word, ind + 1, row + 1, col) ||
                        wordSearch(board, word, ind + 1, row - 1, col) ||
                        wordSearch(board, word, ind + 1, row, col + 1) ||
                        wordSearch(board, word, ind + 1, row, col - 1);
        board[row][col] = temp;
        return found;
    }
    public boolean exist(char[][] board, String word) {
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                if (wordSearch(board, word, 0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }
}