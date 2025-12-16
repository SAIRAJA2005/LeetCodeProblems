class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>unmap;
        for(int i = 0 ; i < nums.size() ; i++){
            if(unmap.find(target - nums[i]) != unmap.end()){
                return {unmap[target - nums[i]] , i};
            }
            unmap[nums[i]] = i;
        }
        return {};
    }
};