// Last updated: 27/12/2025, 21:42:37
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int found = k - 1;
        if (found == 0)
            return true;
        for (int j = k + 1; j < nums.size(); j++) {
            if (nums[j] > nums[j - 1] && nums[j - k] > nums[j - k - 1])
                found--;
            else
                found = k - 1;
            if (found == 0)
                return true;
        }
        return false;
    }
};