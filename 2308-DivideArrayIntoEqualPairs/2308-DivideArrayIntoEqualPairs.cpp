// Last updated: 01/09/2025, 00:59:54
class Solution {
public:
    bool divideArray(vector<int>& nums) {
       map<int,int>mp;
       set<int>st(nums.begin(),nums.end());
       for(int i = 0 ; i < nums.size() ; i++){
           mp[nums[i]]++;
       }
       int k = 0;
       for(auto i : mp){
           if(i.second % 2 == 0) k++;
       }
       return k == st.size();
    }
};