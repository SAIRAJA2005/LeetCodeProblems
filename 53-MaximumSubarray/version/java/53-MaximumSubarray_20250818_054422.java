// Last updated: 18/08/2025, 05:44:22
class Solution {
    public int maxSubArray(int[] nums) {
        
        int sum = 0;
        int maxiSum = Integer.MIN_VALUE;
        for(int i = 0 ; i < nums.length ; i++){
            if(sum < 0) sum = 0;
            sum += nums[i];
            maxiSum = Math.max(maxiSum, sum);
        }
        return maxiSum;
    }
}