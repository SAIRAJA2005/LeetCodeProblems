class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res;
        int sm = 0;
        unordered_map<int,int>mp;
        for(auto i : grid){
            for(auto j : i){
                mp[j]++;
                sm += j; // 8
            }
        }
        for(auto i : mp){
            if(i.second > 1){
                res.push_back(i.first);
                break;
            }
        }
        sm = sm - res[0];
        int n = grid.size();
        n = n * n;
        int k = (n * (n + 1)) / 2;    // 10
        res.push_back(k - sm);
        return res;
    }
};