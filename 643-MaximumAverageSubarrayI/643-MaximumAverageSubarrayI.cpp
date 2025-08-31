// Last updated: 01/09/2025, 01:03:33
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum = 0.00000;
        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }
        double maxAverage = currentSum / k;            
        for (int i = k; i < nums.size(); i++) {
            currentSum += nums[i] - nums[i - k]; 
            maxAverage = max(maxAverage, currentSum / k); 
        }
    
        return maxAverage;
    }
};