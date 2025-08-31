// Last updated: 01/09/2025, 01:04:26
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 1) return true;
        else if(n <= 0 || n % 4 != 0) return false;
        return isPowerOfFour(n / 4);
    }
};