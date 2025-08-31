// Last updated: 01/09/2025, 00:59:43
class Solution {
    public long findZeros(int n){
        long s = (long) n * (n + 1) / 2;
        return s;
    }
    public long zeroFilledSubarray(int[] nums) {
        int i = 0;
        int j = 0;
        long total = 0;
        while(i <= j && j < nums.length){
            if(nums[j] == 0){
                i = j;
                while(j < nums.length && nums[j] == 0){
                    j++;
                }
                //System.out.println(j - i);
                total += findZeros(j - i);
            }
            j++;
        }
        return total;
    }

}