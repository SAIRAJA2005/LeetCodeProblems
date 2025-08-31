// Last updated: 01/09/2025, 01:03:27
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(),nums.end(),0);
        int leftSum = 0;
        for(int i = 0 ; i < nums.size(); i++){
            leftSum += nums[i];
            if(leftSum == rightSum) return i;
            rightSum -= nums[i]; 
        }
        return -1;
    }
};