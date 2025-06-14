// Last updated: 15/06/2025, 00:52:02
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin() , nums.end());
        set<vector<int>>ans;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int j = i + 1;
            int k = n - 1;
            while(j < k){
                int sm = nums[i] + nums[j] + nums[k];
                if(sm == target) {
                    ans.insert({nums[i], nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sm < target){
                    j++;
                }
                else{
                    k--;
                }
            }

        }
        vector<vector<int>>res;
        for(auto triple : ans){
            res.push_back(triple);
        }
        return res;
    }
};