// Last updated: 01/09/2025, 00:57:30
class Solution {
public:
    int maxSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        set<int>s(nums.begin(),nums.end());
        int sm = 0;
        for(auto i : s){
            if(i > 0){
                sm += i;
            }
        }
        if(sm == 0 && s.size() != 0){
            return *prev(s.end());
        }
        return sm;
    }
};