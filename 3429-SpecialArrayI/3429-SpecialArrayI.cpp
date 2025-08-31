// Last updated: 01/09/2025, 00:57:59
class Solution {
public:
    bool fun(int a, int b){
        if(a % 2 == 0){
            if(b % 2 != 0){
                return true;
            }
        }
        return false;
    }
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return true;
        int cnt = 0;
        for(int i = 0 ; i < n-1 ; i++){
            if(fun(nums[i] , nums[i+1]) || fun(nums[i+1],nums[i])){
                cnt++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};