// Last updated: 01/09/2025, 01:06:07
class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag Alogrithm [three pointers]
        int low = 0 , mid = 0 , high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low] , nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid] , nums[high]);
                high--;
            }
        }
    }
};

// Time complexity -> O(N)
// Space complexity -> O(1)