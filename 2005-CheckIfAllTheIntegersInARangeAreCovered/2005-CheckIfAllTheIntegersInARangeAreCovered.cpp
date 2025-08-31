// Last updated: 01/09/2025, 01:00:48
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_map<int,int>mp;
        for(auto x : ranges){
            for(int i = x[0] ; i <= x[1] ; i++){
                mp[i]++;
            }
        }
        for(int i = left ; i <= right ; i++){
            if(mp.find(i) == mp.end()) return false;
        }
        return true;
    }
};