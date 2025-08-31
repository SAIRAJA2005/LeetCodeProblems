// Last updated: 01/09/2025, 01:00:38
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int k=nums.size();
        int i=0;
        while(k!=2*k && i<k){
            nums.push_back(nums[i]);
            i++;
        }
        return nums;
    }
};