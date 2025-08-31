// Last updated: 01/09/2025, 00:59:00
class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        vector<int>res;
        int cnt = 0;
        int Size = nums[0].size();
        while(Size > 0){
            for(int i = 0 ; i < nums.size() ; i++){
                sort(nums[i].begin(),nums[i].end());
                res.push_back(nums[i].back());
                nums[i].pop_back();
            }
            cnt += *max_element(res.begin(),res.end());
            res.clear();
            Size--;
        }
        return cnt;
    }
};