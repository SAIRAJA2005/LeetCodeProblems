// Last updated: 01/09/2025, 01:06:44
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    for(int i=0;i<nums.size();){
        if(nums[i]==val){
            nums.erase(nums.begin() + i);
        }
        else{
            i++;
        }
    }
    return nums.size();
    }
};