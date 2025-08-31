// Last updated: 01/09/2025, 01:05:00
class Solution {
public:
    void generate(int q , int k , int tar, vector<int>&ans, vector<vector<int>>&res){
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
        if(tar < 0) return;
        if(tar == 0 && ans.size() == k){
            //sort(ans.begin(),ans.end());
            res.push_back(ans);
            return;
        }
        if(q > 9) return;
        ans.push_back(q);
        generate(q+1,k,tar-q,ans,res);
        ans.pop_back();
        generate(q+1,k,tar,ans,res);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>ans;
        generate(1,k,n,ans,res);
        //vector<vector<int>>result;
        //for(auto i : res) result.push_back(i);
        return res;
    }
};