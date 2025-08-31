// Last updated: 01/09/2025, 01:03:59
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans = 0;
        for(int i = 1 ; i < num ; i++){
            if(num%i==0) ans+=i;
        }
        if(ans == num) return true;
        else return false;
    }
};