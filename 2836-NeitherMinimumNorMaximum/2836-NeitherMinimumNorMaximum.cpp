// Last updated: 01/09/2025, 00:58:48
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int mx = *max_element(nums.begin(),nums.end());
        int mn = *min_element(nums.begin(),nums.end());
        for(auto i : nums){
            if(i != mx && i != mn) return i;
        }
        return -1;
    }
};