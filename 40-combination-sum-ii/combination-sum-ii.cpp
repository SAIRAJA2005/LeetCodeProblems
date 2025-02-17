class Solution {
public:
    void combinationSum(int idx , vector<int>&candidates , int tar, vector<vector<int>>&res, vector<int>&ans){
        if(tar == 0){
            res.push_back(ans);
            return;
        }
        for(int i = idx ; i < candidates.size() ; i++){
            if(i > idx && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > tar) break;
            ans.push_back(candidates[i]);
            combinationSum(i+1,candidates,tar - candidates[i],res,ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>res;
        vector<int>ans;
        combinationSum(0,candidates,target,res,ans);
        return res;
    }
};