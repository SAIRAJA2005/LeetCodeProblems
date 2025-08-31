// Last updated: 01/09/2025, 01:06:32
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ms = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == ms) ms++;
        }
        return ms;
    }
};