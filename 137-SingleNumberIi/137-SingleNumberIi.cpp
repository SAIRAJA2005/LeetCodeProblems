// Last updated: 01/09/2025, 01:05:36
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second == 1) return i.first;
        }
        return -1;
    }
};