// Last updated: 01/09/2025, 00:57:44
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int ans = 0;
        int i = 0;
        int j = 2;
        while(i < j && j < nums.size()){
            if(nums[i+1] == (nums[i] + nums[j]) * 2){
                ans++;
            }
            i++;
            j++;
        }
        return ans;
    }
};