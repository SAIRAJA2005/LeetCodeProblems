// Last updated: 01/09/2025, 01:05:29
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int minRotated = INT_MAX;
        while(low <= high){
            int mid = (low + high) / 2 ;
            if(nums[low] <= nums[mid]){
                minRotated = min(nums[low] , minRotated);
                low = mid + 1;
            }
            else{
                minRotated = min(minRotated,nums[mid]);
                high = mid - 1;
            }
        }
        return minRotated;
    }
};