// Last updated: 01/09/2025, 00:59:39
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) mp[nums[i]]++;
        }
        int max = 0;
        for(auto i : mp){
            if(i.second > max) max = i.second;
        }
        for(auto i : mp){
            if(max == i.second) return i.first;
        }
        return -1;
    }
};