// Last updated: 01/09/2025, 01:03:02
class Solution {
    public void merge(int[] nums, int low, int mid, int high){
        int i = low;
        int j = mid + 1;
        int k = 0;
        int[] arr = new int[high - low + 1];
        while(i <= mid && j <= high){
            if(nums[j] > nums[i]){
                arr[k++] = nums[i++];
            }
            else{
                arr[k++] = nums[j++];
            }
        }

        while(i <= mid){
            arr[k++] = nums[i++];
        }

        while(j <= high){
            arr[k++] = nums[j++];
        }

        for(int q = 0 ; q < high - low + 1 ; q++){
            nums[q + low] = arr[q];
        }
    }
    public void mergeSort(int[] nums, int low, int high){
        if(low < high){
            int mid = (low + high) / 2;
            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);
            merge(nums, low, mid, high);
        }
    }
    public int[] sortArray(int[] nums) {
        int n = nums.length;
        mergeSort(nums, 0, n - 1);
        return nums;
    }
}