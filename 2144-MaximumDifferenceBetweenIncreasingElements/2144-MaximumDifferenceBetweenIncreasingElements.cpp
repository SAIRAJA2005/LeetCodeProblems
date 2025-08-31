// Last updated: 01/09/2025, 01:00:24
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        stack<int>st;
        int mx = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(!st.empty() && st.top() > nums[i]){
                st.pop();
                st.push(nums[i]);
            }
            else if(!st.empty() && st.top() < nums[i]){
                mx = max(mx , nums[i] - st.top());
            }
            else{
                st.push(nums[i]);
            }
        }
        return mx;
    }
};