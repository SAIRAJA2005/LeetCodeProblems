class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0 && nums[start] == 0){
                continue;
            }
            if(nums[i] == 0){
                start = i;
            }
            if(nums[i] != 0 && nums[start] == 0){
                swap(nums[i], nums[start]);
                start++;
            }
        }
    }
};