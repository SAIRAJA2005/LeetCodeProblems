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
            leftSum += nums[i];                   
            rightSum = (sm - leftSum);           
            if((abs(leftSum - rightSum)) % 2 == 0) cnt++;  
        }
        return cnt;
    }
};