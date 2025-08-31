// Last updated: 01/09/2025, 00:59:17
class Solution {
public:
    int fun(int n){
        int t=0;
        if(n<10) return n;
        while(n!=0){
            int j=n%10;
            t=t+j;
            n=n/10;
        }
        return t;
    }
    int differenceOfSum(vector<int>& nums) {
        int p=0;
        for(int i=0;i<nums.size();i++){
            p+=fun(nums[i]);
        }
        int q=0;
        for(int i=0;i<nums.size();i++){
            q+=nums[i];
        }
        return abs(p-q);
    }
};