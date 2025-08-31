// Last updated: 01/09/2025, 01:01:54
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        if(target == arr) return true;
        return false;
    }
};