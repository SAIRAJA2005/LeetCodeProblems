// Last updated: 01/09/2025, 01:00:29
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int sum1=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(abs(nums[i]-nums[j])==k) sum1++;
            }
        }
        return sum1;
    }
};