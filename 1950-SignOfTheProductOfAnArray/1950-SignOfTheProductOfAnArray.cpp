// Last updated: 01/09/2025, 01:00:58
class Solution {
public:
    int arraySign(vector<int>& nums) {
        if(count(nums.begin(),nums.end(),0) > 0) return 0;
        else{
            int p = 0;
            for(auto i : nums){
                if (i < 0) p++;
            }
            if (p%2 != 0) return -1;
            return 1;
        }
    }
};