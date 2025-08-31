// Last updated: 01/09/2025, 01:06:59
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        for(int i=0;i<nums1.size();i++){
            vec.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            vec.push_back(nums2[i]);
        }
        sort(vec.begin(),vec.end());
        int a,b,k=vec.size();
        if(k%2==0){
            int p=k/2;
            a=vec[p];
            b=vec[p-1];
            cout<<fixed<<setprecision(5);
            return static_cast<double>((a+b)/2.0);
        }
        else{
            cout<<fixed<<setprecision(5);
            return static_cast<double>(vec[k/2]);
        }
    }
};