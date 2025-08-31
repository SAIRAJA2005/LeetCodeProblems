// Last updated: 01/09/2025, 01:01:44
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i,k=0;
        vector<int>num;
        for(i=0;i<nums.size();i++){
            if(nums[i]>=-1000000 && nums[i]<=1000000){
                k+=nums[i];
                num.push_back(k);
            }
        }
        return num;
    }
};