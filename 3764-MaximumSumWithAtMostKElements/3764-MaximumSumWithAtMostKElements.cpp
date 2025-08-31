// Last updated: 01/09/2025, 00:57:34
class Solution {
public:
    vector<long long > findMaxNum(vector<int>&gr , int k){
        sort(gr.begin(),gr.end());
        vector<long long>res;
        for(int i = gr.size() - 1 ; i >= 0 ; i--){
            if(k == res.size()) break;
            else{
                res.push_back(gr[i]);
            }
        }
        return res;
    }
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        vector<long long>res;
        for(int i = 0 ; i < grid.size() ; i++){
            vector<long long> s = findMaxNum(grid[i], limits[i]);
            for(auto i : s){
                res.push_back(i);
            }
        }
        sort(res.begin(),res.end());
        long long sm = 0;
        int cnt = 0;
        for(int i = res.size() - 1 ; i >=0 ; i--){
            if(k == 0) break;
            sm += res[i];
            k--;
        }
        return sm;
    }
};