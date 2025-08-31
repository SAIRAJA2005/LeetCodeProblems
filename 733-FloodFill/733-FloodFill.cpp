// Last updated: 01/09/2025, 01:03:24
class Solution {
public:
    void dfs(int initCol, int sr, int sc , int color, vector<vector<int>>& image ,
                int delRow[], int delCol[] ,  vector<vector<int>>&res ){

        int n = image.size();
        int m = image[0].size();

        res[sr][sc] = color;

        for(int i = 0 ; i < 4 ; i++){
            int row = delRow[i] + sr;
            int col = delCol[i] + sc;

            if(row >= 0 && row < n && col >= 0 && col < m && image[row][col] == initCol && res[row][col] != color){
                dfs(initCol , row, col, color, image, delRow, delCol, res);
            } 
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initCol = image[sr][sc];
        int delRow[] = {0 , -1 , 0 , 1};
        int delCol[] = {-1, 0  , 1 , 0};
        vector<vector<int>>result = image;
        dfs(initCol , sr , sc , color, image, delRow , delCol, result);
        return result;
    }
};