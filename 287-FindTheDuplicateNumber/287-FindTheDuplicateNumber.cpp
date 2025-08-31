// Last updated: 01/09/2025, 01:04:34
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>um;
        for(auto i : nums){
            um[i]++;
        }
        for(auto i : um){
            if(i.second >= 2) return i.first;
        }
        return -1;
    }
};