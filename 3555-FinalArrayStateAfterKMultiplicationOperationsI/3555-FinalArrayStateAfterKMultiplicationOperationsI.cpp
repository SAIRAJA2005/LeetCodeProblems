// Last updated: 01/09/2025, 00:57:49
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 1 ; i <= k ; i++){
            int sltMin = *min_element(nums.begin(),nums.end());
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[j] == sltMin){
                    nums[j] = nums[j] * multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};