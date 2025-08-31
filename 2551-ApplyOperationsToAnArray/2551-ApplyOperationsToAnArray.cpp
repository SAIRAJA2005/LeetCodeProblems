// Last updated: 01/09/2025, 00:59:31
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>res;
        int cnt = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] == nums[i + 1]){
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }
            if(nums[i] == 0) cnt++;
        }
        if(nums[nums.size()-1] == 0) cnt++;
        for(auto i : nums){
            if(i != 0) res.push_back(i);
        }
        for(int i = 0 ; i < cnt ; i++) res.push_back(0);
        return res;
    }
};