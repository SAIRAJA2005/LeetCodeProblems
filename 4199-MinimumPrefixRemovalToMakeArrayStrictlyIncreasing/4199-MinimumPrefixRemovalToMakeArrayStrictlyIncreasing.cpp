// Last updated: 03/02/2026, 23:41:09
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        while(i > 0 && nums[i] > nums[i - 1]) i--;
        return i;
    }
};
