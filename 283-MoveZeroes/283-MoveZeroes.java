// Last updated: 01/09/2025, 01:04:35
class Solution {
    public void swap(int[] nums, int a, int b){
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }
    public void moveZeroes(int[] nums) {
        int start = 0;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i] == 0 && nums[start] == 0){
                continue;
            }
            if(nums[i] == 0){
                start = i;
            }
            if(nums[i] != 0 && nums[start] == 0){
                swap(nums, i , start);
                start++;
            }
        }
    }
}