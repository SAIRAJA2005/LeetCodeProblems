class Solution {
public:
    void generator(int i , vector<int>ans, set<vector<int>>&res, vector<int>&nums){
        if(i >= nums.size()){
            for (auto it : ans) cout << it << " ";
            cout << "\n";
            sort(ans.begin(),ans.end());
            res.insert(ans);
            return;
        }
        generator(i+1,ans,res,nums);
        ans.push_back(nums[i]);
        //ans.pop_back();
        generator(i+1,ans,res,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>res;
        vector<int>ans;
        generator(0,ans,res,nums);
        vector<vector<int>>resOne;
        for(auto i : res){
            resOne.push_back(i);
        }
        return resOne;
    }
};