// Last updated: 01/09/2025, 00:58:07
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.empty()) return 0;
        int maxLen = 1;
        int inc = 1;
        int dec = 1;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] < nums[i+1]){
                inc++;
                dec = 1;
            } 
            else if(nums[i] > nums[i+1]){
                dec++;
                inc = 1;
            } 
            else inc = dec = 1;
            maxLen = max(maxLen,max(inc,dec));
        }
        return maxLen;
    }
};