// Last updated: 11/06/2025, 22:42:06
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