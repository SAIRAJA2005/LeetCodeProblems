// Last updated: 01/09/2025, 01:03:47
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sm = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-1 ; i+=2){
            int mn = min(nums[i],nums[i+1]);
            sm += mn;
        }
        return sm;

    }
};