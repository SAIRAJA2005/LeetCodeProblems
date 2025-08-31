// Last updated: 01/09/2025, 01:01:09
class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int cnt = 0;
        int n = nums.size();
        if(nums[n-1] > nums[0]) cnt++;
        for(int i = 1 ; i < n ; i++){
            if(nums[i-1] > nums[i]) cnt++;
            if(cnt == 2) return false;
        }
        return true;
    }
};