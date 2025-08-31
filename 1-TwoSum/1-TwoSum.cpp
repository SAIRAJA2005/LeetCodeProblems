// Last updated: 01/09/2025, 01:07:03
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>unmap;
        for(int i = 0 ; i < nums.size() ; i++){
            if(unmap.find(target - nums[i]) != unmap.end()){
                return {i , unmap[target - nums[i]]};
            }
            unmap[nums[i]] = i;
        }
        return {};
    }
};