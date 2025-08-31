// Last updated: 01/09/2025, 00:59:52
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>minFreq;
        for(auto i : nums[0]) minFreq[i]++;
        for(int i = 1 ; i < nums.size() ; i++){
            map<int,int>freq;
            for(int j : nums[i]){
                freq[j]++;
            }
            for(int i = 1 ; i <= 1000 ; i++){
                minFreq[i] = min(minFreq[i],freq[i]);
            }
        }
        vector<int>res;
        for(int i = 1 ; i <= 1000 ; i++){
            if(minFreq[i]-- > 0){
                res.push_back(i);
            }
        }
        return res;
    }
};