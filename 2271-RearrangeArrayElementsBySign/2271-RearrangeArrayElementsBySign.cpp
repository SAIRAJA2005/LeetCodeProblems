// Last updated: 01/09/2025, 01:00:02
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>Ans(nums.size(),0);
        int Pos = 0,Neg = 1; 
        for(int  i = 0 ; i < nums.size(); i++){
            if(nums[i] > 0){
                Ans[Pos] = nums[i];
                Pos+=2;
            }
            else{
                Ans[Neg] = nums[i];
                Neg+=2;
            }
        }
        return Ans;
    }
};