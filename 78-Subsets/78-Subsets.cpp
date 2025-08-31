// Last updated: 01/09/2025, 01:06:09
class Solution {
public:
    void sub(int i , int n, vector<int>&smallVec, vector<int>&givenVec, vector<vector<int>>&res){
        if(i == n){
            res.push_back(smallVec);
            return;
        }
        
        // pick
        smallVec.push_back(givenVec[i]);
        sub(i+1,n,smallVec,givenVec,res);
        smallVec.pop_back();

        // not pick
        sub(i+1,n,smallVec,givenVec,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec;
        vector<vector<int>>res;
        sub(0,n,vec,nums,res);
        return res;
    }
};