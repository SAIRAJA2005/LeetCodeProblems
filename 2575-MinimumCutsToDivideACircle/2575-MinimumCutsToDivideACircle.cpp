// Last updated: 01/09/2025, 00:59:26
class Solution {
public:
    int numberOfCuts(int n) {
        int x = 0;
        if(n==1) x = 0;
        else if(n%2==0) x = n/2;
        else if(n%2!=0) x = n;
        return x;
    }
};