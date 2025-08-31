// Last updated: 01/09/2025, 00:59:29
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double>st;
        int sz = nums.size();

        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < sz/2 ; i++){
            double cnt = (nums[i] + nums[sz - i - 1]) / 2.0;
            st.insert(cnt);
        }   
        return st.size();

    }
};