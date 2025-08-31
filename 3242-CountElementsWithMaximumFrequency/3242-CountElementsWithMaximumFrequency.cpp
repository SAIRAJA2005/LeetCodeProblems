// Last updated: 01/09/2025, 00:58:20
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        int mx = -1;
        for(auto i : mp){
            if(i.second>mx) mx = i.second;
        }
        int cnt = 0;
        for(auto i : mp){
            if(i.second == mx) cnt += i.second; 
        }
        return cnt;
        
    }
};