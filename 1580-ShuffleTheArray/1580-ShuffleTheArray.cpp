// Last updated: 01/09/2025, 01:01:49
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>vec;
        int i,k;
        k = nums.size();
        for(i=0;i<n;i++){
            if (i<k/2){
                vec.push_back(nums[i]);
                vec.push_back(nums[k/2+i]);
            }
            else{
                break;
            }
        }
        return vec;
    }
};