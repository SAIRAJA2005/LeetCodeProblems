// Last updated: 01/09/2025, 01:00:20
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            if(i % 10 == nums[i]) return i;
        }
        return -1;
    }
};