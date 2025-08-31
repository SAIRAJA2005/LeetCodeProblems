// Last updated: 01/09/2025, 01:02:49
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        else if(n == 1) return 1;
        return fib(n-2)+fib(n-1);
    }
};