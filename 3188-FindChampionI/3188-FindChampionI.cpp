// Last updated: 01/09/2025, 00:58:24
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        vector<int>vec;
        for(int i = 0 ; i < grid.size() ; i++){
            int cnt = 0;
            for(int j = 0 ; j < grid[i].size() ; j++){
                cnt += grid[i][j];
            }
            vec.push_back(cnt);
        }
        int mx = 0;
        int mxInd = 0;
        for(int i = 0 ; i < vec.size() ; i++){
            if(mx < vec[i]){
                mx = vec[i];
                mxInd = i;
            }
        }
        return mxInd;
    }
};