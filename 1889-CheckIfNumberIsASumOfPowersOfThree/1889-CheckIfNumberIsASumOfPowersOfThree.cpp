// Last updated: 01/09/2025, 01:01:08
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n!=0){
            if(n%3 == 2) return false;
            n/=3;
        }
        return true;
    }
};