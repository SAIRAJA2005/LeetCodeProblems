// Last updated: 01/09/2025, 00:58:56
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int p=*max_element(nums.begin(),nums.end());
        int l1=p;
        for(int i=0;i<k-1;i++)
        {
            int l=l1+1;
            l1=l;
            p=p+l;
        }
        return p;
    }
};