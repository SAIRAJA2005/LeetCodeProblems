// Last updated: 01/09/2025, 01:03:20
class Solution {
public:
    int binarySearch(vector<int>arr , int low , int high , int tar){
        int mid = (low + high) / 2;
        if(high < low) return -1;
        if(arr[mid] == tar) return mid;
        else if (arr[mid] > tar) return binarySearch(arr, low , mid - 1 , tar);
        return binarySearch(arr, mid + 1 , high , tar);
    }
    int search(vector<int>& nums, int target) {
        int ans = binarySearch(nums, 0 , nums.size()-1 , target);
        return ans;
    }
};