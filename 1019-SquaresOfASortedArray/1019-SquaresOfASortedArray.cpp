// Last updated: 01/09/2025, 01:02:48
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>Sq;
        for(auto i : nums){
            Sq.push_back(i*i);
        }
        sort(Sq.begin(),Sq.end());
        return Sq;
    }
};