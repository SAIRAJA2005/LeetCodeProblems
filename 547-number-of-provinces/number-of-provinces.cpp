class Solution {
public:
    void dfs(vector<vector<int>>&adjLst, vector<int>&vis,  int idx){
        vis[idx] = 1;
        for(auto node : adjLst[idx]){
            if(!vis[node]){
                dfs(adjLst, vis, node);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>>adjLst(n);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adjLst[i].push_back(j);
                    adjLst[j].push_back(i);
                }
            }
        }
        vector<int>vis(n , 0);
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                cnt++;
                dfs(adjLst, vis , i);
            }
        }
        return cnt;

    }
};