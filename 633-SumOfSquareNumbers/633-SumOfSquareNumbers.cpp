// Last updated: 01/09/2025, 01:03:34
class Solution {
public:
    bool judgeSquareSum(int c) {
        long a = 0, b = sqrt(c);
        while(a<=b){
           long k = (a*a)+(b*b);
           if(k == c) return true;
           else if(k < c) a++;
           else b--;
        }
        return false;
    }
};