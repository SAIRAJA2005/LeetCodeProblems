// Last updated: 01/09/2025, 00:57:39
class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sm = 0;
        for(int i = 0 ; i < nums.size(); i++){
            
            if(i - k < 0){
                if(i + k < nums.size()  && nums[i] > nums[i+k]){
                    sm += nums[i];
                }
            }
                
            else if(i + k >= nums.size()){
                if(i - k >= 0 && nums[i] > nums[i-k]){
                    sm += nums[i];
                }
            }
                
            else if(i - k >= 0 && i + k < nums.size()){
                if(nums[i-k] < nums[i] && nums[i+k] < nums[i]) sm += nums[i];
            }

           // cout << sm << " ";
            
        }
        //if(sm == 0) return nums[0];
        return sm;
    }
};