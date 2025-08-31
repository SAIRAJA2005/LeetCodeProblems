// Last updated: 01/09/2025, 00:58:21
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>vec1;
        sort(nums.begin(), nums.end());
        for(int i=2 ; i<nums.size(); i+=3){
            if(nums[i]-nums[i-2]>k) return {};
            vec1.push_back({nums[i-2],nums[i-1],nums[i]});
        }
        return vec1;
    }
};