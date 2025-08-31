// Last updated: 01/09/2025, 00:58:47
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        vector<int>vec;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums.size()%(i+1)==0){
                k=k+(nums[i]*nums[i]);
            } 
        }
        return k;
    }
};