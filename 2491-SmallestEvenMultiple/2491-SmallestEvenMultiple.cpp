// Last updated: 01/09/2025, 00:59:38
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n==1) return 2;
        for(int i=1;i<n;i++){
            if((i*n)%n==0 && (n*i)%2==0) return n*i;
        }
        return 0;
    }
};