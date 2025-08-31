// Last updated: 01/09/2025, 01:02:45
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int ZeroCnt = 0;
        int mx = INT_MIN;

        while(left <= right && right < n){
            if(nums[right] == 0){
                ZeroCnt++;
            }
            while(ZeroCnt > k){
                if(nums[left] == 0){
                    ZeroCnt--;
                }
                left++;
            }
            if(ZeroCnt <= k){
                int len = (right - left) + 1;
                mx = max(mx,len);
            
            }
            right++;
        }
        return mx;
    }
};