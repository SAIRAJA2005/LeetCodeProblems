// Last updated: 01/09/2025, 01:00:30
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans = "";
        for(int i = 0 ; i < nums.size() ; i++){
            ans += (nums[i][i] == '0') ? '1' : '0';
        }
        return ans;
    }
};