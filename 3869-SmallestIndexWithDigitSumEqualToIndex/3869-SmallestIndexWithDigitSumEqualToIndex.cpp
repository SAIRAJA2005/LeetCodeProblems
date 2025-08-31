// Last updated: 01/09/2025, 00:57:23
class Solution {
public:
    int fun(int n){
        int k = 0;
        while(n != 0){
            int p = n % 10;
            k += p;
            n = n / 10;
        }
        return k;
    }
    
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            if(fun(nums[i]) == i){
                return i;
            }
        }
        return -1;
    }
};