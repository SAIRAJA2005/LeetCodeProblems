// Last updated: 01/09/2025, 01:02:58
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      vector<int>Ans(nums.size(),-1);
        int Pos = 0 ,Neg = 1; 
        for(int  i = 0 ; i < nums.size(); i++){
            if(nums[i]%2 == 0){
                Ans[Pos] = nums[i];
                Pos+=2;
            }
            else if (nums[i]%2 != 0){
                Ans[Neg] = nums[i];
                Neg+=2;
            }
        }
        return Ans;
    }
};