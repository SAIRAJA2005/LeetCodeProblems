// Last updated: 01/09/2025, 00:58:15
class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1]>nums[2]){
            if(nums[0]==nums[1] && nums[1]==nums[2]) return "equilateral";
            else if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]) return "isosceles";
            else if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1]) return "scalene";
        }
        return "none";
    }
};