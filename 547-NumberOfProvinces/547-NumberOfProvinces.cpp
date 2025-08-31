// Last updated: 01/09/2025, 01:03:51
class Solution {
public:
    void dfs(int node, vector<vector<int>>&adj , vector<int>&vis){
        vis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it , adj , vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int s = isConnected.size();
        vector<vector<int>> adjLs(s);

        //convert matrix into the adjecency list
        for(int i = 0 ; i < s ; i++){
            for(int j = 0 ; j < s ; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }

        vector<int>vis(s , 0);
        int cnt = 0;
        for(int i = 0 ; i < s ; i++){
            if(vis[i] == 0){
                cnt++;
                dfs(i , adjLs , vis);
            }
        }

        return cnt;
    }
};