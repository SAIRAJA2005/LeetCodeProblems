// Last updated: 01/09/2025, 01:02:02
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>new1;
        for(int i=  0; i<nums.size(); i++) {
            new1.insert(new1.begin() + index[i],nums[i]);
        }
        return new1;
    }
};