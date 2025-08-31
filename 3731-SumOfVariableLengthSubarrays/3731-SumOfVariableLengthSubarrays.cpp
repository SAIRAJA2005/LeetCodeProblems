// Last updated: 01/09/2025, 00:57:38
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sm = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = max(0,i-nums[i]) ; j <= i ; j++){
                sm += nums[j];
            }
        }
        return sm;
    }
};