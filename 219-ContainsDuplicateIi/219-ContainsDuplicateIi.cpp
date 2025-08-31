// Last updated: 01/09/2025, 01:04:58
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>new1;
        for(int i=0;i<nums.size();i++){
            if(new1.find(nums[i])!=new1.end()){
                if(abs(i-new1[nums[i]])<=k) return true;
            }
            new1[nums[i]]=i;
        }
        return false;
    }
};