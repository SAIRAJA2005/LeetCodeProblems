// Last updated: 01/09/2025, 00:57:36
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mx = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            mx = max(mx , abs(nums[i + 1] - nums[i]));
        }
        int n  = nums.size();
        mx = max(mx , abs(nums[n - 1] - nums[0]));
        return mx; 
    }
};