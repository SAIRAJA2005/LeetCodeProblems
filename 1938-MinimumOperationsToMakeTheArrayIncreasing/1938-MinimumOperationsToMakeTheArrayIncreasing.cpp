// Last updated: 01/09/2025, 01:01:00
class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int>temp = nums;
        int res = 0;
        for(int i = 0;i < nums.size()-1;i++){
            if(nums[i] >= nums[i+1]){
                nums[i+1] = nums[i]+1;
            }
        }
        for(int i = 0; i < temp.size();i++){
            res += nums[i] - temp[i];
        }
        return res;        
    }
};