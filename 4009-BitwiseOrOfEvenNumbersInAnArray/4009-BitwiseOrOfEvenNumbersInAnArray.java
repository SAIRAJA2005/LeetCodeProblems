// Last updated: 27/12/2025, 21:42:16
class Solution {
    public int evenNumberBitwiseORs(int[] nums) {
        int num = 0;
        for(int n : nums){
            if(n % 2 == 0) num |= n; 
        }
        return num;
    }
}