// Last updated: 01/09/2025, 00:57:32
class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long sm = 0;
        for(int i = n / 3 ; i < n ; i += 2){
            sm += nums[i];
        }
        return sm;
    }
};