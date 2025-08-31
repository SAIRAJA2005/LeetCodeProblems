// Last updated: 01/09/2025, 01:02:51
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size();
        for(auto i : nums){
            if(count(nums.begin(),nums.end(),i) == size/2) return i;
        }
        return -1;
    }
};