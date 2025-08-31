// Last updated: 01/09/2025, 00:58:35
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int>vec;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = nums[i][0] ; j <= nums[i][1] ;j++){
                vec.push_back(j);
            }
        }
        set<int>st(vec.begin(),vec.end());
        return st.size();
    }
};