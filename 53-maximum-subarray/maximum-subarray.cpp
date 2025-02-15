class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cont = 0;
        int mx = INT_MIN;
        int m = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            m = max(m , nums[i]);
            cont += nums[i];
            if(cont < 0) cont = 0;
            mx = max(mx , cont);
        }
        return mx == 0 ? m : mx;
    }
};