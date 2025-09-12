class Solution {
public:
    int findMe(vector<int>&nums, int ind , int res){
        if(ind >= nums.size()) return res;
        int left = findMe(nums, ind + 1 , res ^ nums[ind]);
        int right = findMe(nums, ind + 1 , res);
        return left + right;
    }
    int subsetXORSum(vector<int>& nums) {
        return findMe(nums, 0 , 0);
    }
};