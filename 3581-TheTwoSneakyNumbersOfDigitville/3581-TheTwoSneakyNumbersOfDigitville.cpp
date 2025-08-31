// Last updated: 01/09/2025, 00:57:47
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>re;
        vector<int>res = nums;
        set<int>st(res.begin(),res.end());
        for(auto it : st){
            if(count(nums.begin(),nums.end(),it) == 2){
                re.push_back(it);
            }
        }
        return re;
    }
};