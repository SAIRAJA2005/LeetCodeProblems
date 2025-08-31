// Last updated: 01/09/2025, 01:04:42
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if (count(nums.begin(),nums.end(),nums[i])==1)
            {
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};