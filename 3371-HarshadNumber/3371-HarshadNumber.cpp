// Last updated: 01/09/2025, 00:58:08
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int k = x;
        int p = 0;
        while(x!=0){
            int r =  x % 10;
            p += r;
            x = x / 10;
        }
        if(k % p == 0) return p;
        return -1; 
        
    }
};