// Last updated: 01/09/2025, 01:04:59
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>unmap;
        for(auto i : nums){
            unmap[i]++;
        }
        for(auto i : unmap){
            if(i.second > 1) return true;
        }
        return false;
    }
};