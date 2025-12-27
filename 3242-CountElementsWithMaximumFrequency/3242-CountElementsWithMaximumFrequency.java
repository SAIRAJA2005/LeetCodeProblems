// Last updated: 27/12/2025, 21:43:01
class Solution {
    public int maxFrequencyElements(int[] nums) {
        int freq[] = new int[101];
        int maxFreq = 0;
        for(int num : nums){
            freq[num]++;
            maxFreq = Math.max(maxFreq , freq[num]);
        }
        int ans = 0;
        for(int f : freq){
            if(f == maxFreq){
                ans += maxFreq;
            }
        }
        return ans;
    }
}