// Last updated: 01/09/2025, 00:58:00
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int r = 0;
        unordered_map<int,int>um;
        for(auto i : nums){
            um[i]++;
        }
        vector<int>v;
        bool k = false;
        for(auto i : um){
            if(i.second == 2){
                r ^= i.first;
                k = true;
            }
        }
        if (k==false) return 0;
        return r;

    }
};