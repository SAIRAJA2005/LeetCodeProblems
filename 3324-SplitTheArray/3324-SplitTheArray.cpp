// Last updated: 01/09/2025, 00:58:14
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > 2) return false;
        }
        return true;
    }
};