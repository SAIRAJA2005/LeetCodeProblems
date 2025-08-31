// Last updated: 01/09/2025, 01:01:01
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx = 0;
        int sm = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i-1] < nums[i]){
                sm += nums[i];
            }
            else{
                mx = max(mx,sm);
                sm = nums[i];
            }
        }
        return max(mx,sm);
    }
};