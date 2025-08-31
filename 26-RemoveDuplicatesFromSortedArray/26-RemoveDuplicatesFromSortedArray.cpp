// Last updated: 01/09/2025, 01:06:45
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] != nums[i-1]){
                nums[s] = nums[i];
                s++;
            }
        }
        return s;
    }
};