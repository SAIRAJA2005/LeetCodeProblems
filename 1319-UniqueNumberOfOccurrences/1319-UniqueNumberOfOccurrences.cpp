// Last updated: 01/09/2025, 01:02:22
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>unmap;
        for(int i : arr){
            unmap[i]++;
        }
        vector<int>res;
        for(auto i : unmap){
            res.push_back(i.second);
        }
        for(int i : res){
            if(count(res.begin(),res.end(),i) > 1) return false;
        }
        return true;
    }
};