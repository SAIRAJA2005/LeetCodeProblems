class Solution {
public:
    void bfs(int node , vector<vector<int>>& adj , vector<int>&vis){
        vis[node] = 1;
        queue<int>q;
        q.push(node);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
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
                bfs(i , adjLs , vis);
            }
        }

        return cnt;
    }
};