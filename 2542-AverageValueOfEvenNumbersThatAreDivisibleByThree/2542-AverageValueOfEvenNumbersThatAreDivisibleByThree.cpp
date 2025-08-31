// Last updated: 01/09/2025, 00:59:33
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int k = 0;
        int cnt = 0;
        for(auto i : nums){
            if (i % 3 == 0 && i % 2 == 0){ 
                k+=i;
                cnt++;
            } 
        }
        if(cnt > 0) return (k/cnt);
        return 0;
    }
};