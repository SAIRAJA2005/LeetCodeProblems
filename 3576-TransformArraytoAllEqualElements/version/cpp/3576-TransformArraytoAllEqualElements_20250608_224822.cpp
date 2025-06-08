// Last updated: 08/06/2025, 22:48:22
class Solution {
public:
    bool canMake(vector<int> nums, int k, int target) {
        int ops = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != target) {
                nums[i] *= -1;
                nums[i+1] *= -1;
                ops++;
                if (ops > k) return false;
            }
        }
        for (int x : nums) {
            if (x != target) return false;
        }
        return true;
    }

    bool canMakeEqual(vector<int>& nums, int k) {
        return canMake(nums , k , 1) || canMake(nums , k , -1);
    }
};