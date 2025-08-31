// Last updated: 01/09/2025, 01:01:12
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sm = 0;
        for(auto i : nums){
            if(count(nums.begin(),nums.end(),i)==1) sm += i;
        }
        return sm;
    }
};