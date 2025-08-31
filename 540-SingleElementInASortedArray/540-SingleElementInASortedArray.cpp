// Last updated: 01/09/2025, 01:03:54
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second == 1) return i.first;
        }
        return -1;
    }
};