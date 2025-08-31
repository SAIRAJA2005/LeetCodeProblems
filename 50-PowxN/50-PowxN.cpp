// Last updated: 01/09/2025, 01:06:27
class Solution {
public:
    double myPo(double x, int n){
        if(n == 0) return 1;
        if(n == 1) return x;
        double c = myPo(x,n/2);
        if(n & 1){
            return c * c * x;
        }
        else{
            return c * c;
        }
    }
    double myPow(double x, int n) {
        if(n < 0){
            long long n1 = n;
            return 1.0 / myPo(x,-1 * n1);
        } 
        else return myPo(x,n);
    }
};