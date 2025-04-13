long long mod = 1e9+7;
class Solution {
public:
    long long myPow(long long x , long long n){
        if(n == 0) return 1;
        if(n == 1) return x%mod;
        long long half = myPow(x,(n/2))%mod;
        long long rem = myPow(x,(n%2))%mod;
        return (half*half*rem)%mod;
    }
    int countGoodNumbers(long long n) {
        if(n == 1) return 5;
        long long  e = (n / 2);
        long long o = (n / 2);
        if(n%2==1) e++;
        long long e1 = myPow(5,e);
        long long o1 = myPow(4,o);
        return (e1 * o1)%mod;

    }
};