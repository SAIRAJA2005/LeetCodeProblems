// Last updated: 01/09/2025, 01:05:59
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i=0,j=0,k=0;
    int res[m+n];
    while(i<m && j<n){
        if(nums1[i]<=nums2[j]) res[k++]=nums1[i++];
        else res[k++]=nums2[j++];
    }
    while(i<m) res[k++]=nums1[i++];
    while(j<n) res[k++]=nums2[j++];
    for(k=0;k<m+n;k++)
    {
        nums1[k]=res[k];
    }
}