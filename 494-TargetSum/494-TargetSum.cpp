// Last updated: 01/09/2025, 01:04:02
class Solution {
public:
    void targetSum(vector<int>&nums, int idx,int target,int sum, int &cnt){
        if(idx == nums.size()){
            if(sum == target){
                cnt++;
            }
            return;
        }
        targetSum(nums,idx+1,target,sum + nums[idx],cnt);
        targetSum(nums,idx+1,target,sum - nums[idx],cnt);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int cnt = 0;
        targetSum(nums,0, target, 0 , cnt);
        return cnt;
    }
};