class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 
        int firstPositive = lower_bound(nums.begin(), nums.end(), 1) - nums.begin();
        int lastNegative = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        return max(lastNegative , n - firstPositive);
    }
};