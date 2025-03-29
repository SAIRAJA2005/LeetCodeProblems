class Solution {
public:
    void bfs(int row, int col, vector<vector<int>>& visited, vector<vector<char>>& grid) {
        visited[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        int n = grid.size();
        int m = grid[0].size();

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            // Traversing all the directions:
            // Up , down ,left , right
            int dr[] = {-1, 1, 0, 0};
            int dc[] = {0, 0, -1, 1};

            for (int i = 0; i < 4; i++) {
                int nrow = r + dr[i];
                int ncol = c + dc[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m 
                    && grid[nrow][ncol] == '1' && !visited[nrow][ncol]) {
                    visited[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> visited(row, vector<int>(col, 0));

        int cnt = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    cnt++;
                    bfs(i, j, visited, grid);
                }
            }
        }
        return cnt;
    }
};
