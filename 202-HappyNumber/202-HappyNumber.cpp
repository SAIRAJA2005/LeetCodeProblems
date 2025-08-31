// Last updated: 01/09/2025, 01:05:09
class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n == 7) return true;
        else{
            while(n > 9){
                int sm = 0;
                while(n > 0){
                    int r = n % 10;
                    sm += (r * r);
                    n /= 10;
                }
                n = sm;
            }
            if (n == 1 or n == 7) return true;
        }
        return false;
    }
};