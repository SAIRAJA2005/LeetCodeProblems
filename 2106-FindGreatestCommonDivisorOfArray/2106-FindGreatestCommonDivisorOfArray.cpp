// Last updated: 01/09/2025, 01:00:31
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        int p=0;
        for(int i=1;i<=min;i++){
            if(max%i==0 && min%i==0){
                int k=i;
                if(p<k) p=k;
            }
        }
        return p;
    }
};