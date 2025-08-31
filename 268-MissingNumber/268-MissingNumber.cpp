// Last updated: 01/09/2025, 01:04:37
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int m = nums.size();
        int k = (m*(m + 1)) / 2 ;
        int tot = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            tot += nums[i];
        }
        return k - tot;
    }
};