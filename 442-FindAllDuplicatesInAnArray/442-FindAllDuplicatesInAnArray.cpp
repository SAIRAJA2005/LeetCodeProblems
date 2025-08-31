// Last updated: 01/09/2025, 01:04:09
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>unm;
        vector<int>vc;
        for(auto i : nums){
            unm[i]++;
        }
        for(auto i : unm){
            if(i.second == 2) vc.push_back(i.first);
        }
        return vc;
    }
};