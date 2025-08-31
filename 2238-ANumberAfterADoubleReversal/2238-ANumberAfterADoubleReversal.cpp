// Last updated: 01/09/2025, 01:00:09
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0 || num%10!=0) return true;
        return false;
    }
};