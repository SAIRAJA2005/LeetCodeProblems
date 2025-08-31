// Last updated: 01/09/2025, 01:04:03
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int mx = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                mx = max(cnt, mx);
                cnt = 0;
            }
            else cnt++;
        }
        return max(cnt, mx);

    }
};