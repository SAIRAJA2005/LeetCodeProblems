// Last updated: 01/09/2025, 01:02:55
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res = nums;
        int result = 0;
        int cnt = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] >= nums[i+1]){
                nums[i+1] = nums[i] + 1;
            }
        }
        for(int i = 0 ; i < res.size() ; i++){
            result += nums[i] - res[i];
        }
        return result++;
    }
};