// Last updated: 01/09/2025, 01:03:03
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>Even;
        vector<int>Odd;
        for(auto i : nums){
            if (i % 2 == 0) Even.push_back(i);
            else if (i % 2 != 0) Odd.push_back(i);
        }
        for(auto i : Odd) Even.push_back(i);
        return Even;
    }
};