// Last updated: 01/09/2025, 01:06:40
class Solution {
public:
    void combSum(int i , int sm , vector<int>&comb , vector<int>&vec, vector<vector<int>>&res, int tar){
        if(i == comb.size()) return;
        if(sm == tar){
            res.push_back(vec);
            return;
        }
        if(tar - sm >= comb[i]){
            vec.push_back(comb[i]);
            combSum(i,sm+=comb[i],comb,vec,res,tar);
            sm-=comb[i];
            vec.pop_back();
        }
        combSum(i+1,sm,comb,vec,res,tar);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>arr;
        vector<vector<int>>res;
        combSum(0,0,candidates,arr,res,target);
        return res;
    }
};