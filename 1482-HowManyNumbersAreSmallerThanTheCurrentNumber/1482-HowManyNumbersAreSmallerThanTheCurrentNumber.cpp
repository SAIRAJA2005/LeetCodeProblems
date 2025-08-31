// Last updated: 01/09/2025, 01:02:04
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count;
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            count = 0;
            for (int j=0;j<nums.size();j++){
                if (nums[i]==nums[j]) continue;
                else if (nums[i]>nums[j]) count++;
            }
            vec.push_back(count);
        }
        return vec;
    }
};