// Last updated: 01/09/2025, 00:59:14
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string numSt = "";
        vector<int>vec;
        for(auto i : nums) numSt += to_string(i);
        for(auto i : numSt) vec.push_back(i-'0');
        return vec;
    }
};