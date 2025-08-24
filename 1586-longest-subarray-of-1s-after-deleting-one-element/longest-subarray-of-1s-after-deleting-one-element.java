class Solution {
    public int longestSubarray(int[] nums) {
        int  l = 0, zerosCnt = 0, maxi = 0;
        
        for (int r = 0; r < nums.length; r++) {
            if (nums[r] == 0) zerosCnt++;
            
            while (zerosCnt > 1) {
                if (nums[l] == 0) zerosCnt--;
                l++;
            }
            
            maxi = Math.max(maxi, r - l);
        }
        
        return maxi;
    }
}


// 1 1 1 0 0 1 0 1 1 1 1

