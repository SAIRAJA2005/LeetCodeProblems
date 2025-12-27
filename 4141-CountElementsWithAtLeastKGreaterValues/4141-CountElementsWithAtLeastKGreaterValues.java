// Last updated: 27/12/2025, 21:42:09
class Solution {
    public int countElements(int[] nums, int k) {
        if(k == 0) return nums.length;
        Arrays.sort(nums);
        int n = nums.length;
        int t = nums[n - k];
        int ans = 0;
        for(int x : nums){
            if(x < t) ans++;
        }
        return ans;
    }
}