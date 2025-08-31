// Last updated: 01/09/2025, 01:00:01
class Solution {
    public int countPairs(int[] nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.length; i++) {
            for(int j = i+1; j < nums.length; j++) {
                if(nums[i] == nums[j] && (i * j) % k == 0){ 
                    count++;
                }
            }
        }
        return count;
    }
}