// Last updated: 01/09/2025, 00:57:41
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sm = 0;
        int n = nums.size();
        int cnt = 0;
        int leftSum = 0;
        int rightSum = 0;
        for(int i = 0 ; i < n ; i++) sm += nums[i];
        for(int i = 0 ; i < n-1 ; i++){
            leftSum += nums[i];                    // 10 20
            rightSum = (sm - leftSum);            // 26 
            if((abs(leftSum - rightSum)) % 2 == 0) cnt++;  
        }
        return cnt;
    }
};