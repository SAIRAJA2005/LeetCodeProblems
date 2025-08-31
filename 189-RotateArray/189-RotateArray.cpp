// Last updated: 01/09/2025, 01:05:20
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       if (n == 0) return;
        k = k % n;
        /*if(k < 0){
            k += n;
        }*/
        reverse(nums.begin() , nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};