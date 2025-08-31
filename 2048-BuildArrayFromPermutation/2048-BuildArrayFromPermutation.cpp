// Last updated: 01/09/2025, 01:00:40
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i;
        vector<int>vec;
        for(i=0;i<nums.size();i++){
            vec.push_back(nums[nums[i]]);
        }
        return vec;
    }
};