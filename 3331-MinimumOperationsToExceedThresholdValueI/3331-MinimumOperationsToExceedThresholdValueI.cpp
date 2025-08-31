// Last updated: 01/09/2025, 00:58:13
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sml = 0;
        for(int i : nums){
            if(i < k) sml++;
        }
        return sml;
    }
};