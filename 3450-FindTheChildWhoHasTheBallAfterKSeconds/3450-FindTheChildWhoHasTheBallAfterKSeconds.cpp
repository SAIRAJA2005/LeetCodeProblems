// Last updated: 01/09/2025, 00:57:56
class Solution {
public:
    int numberOfChild(int n, int k) {
        if(n > k) return k;
        else{
            int y, x = k / (n-1);
            if(x % 2 == 0) y = k - (n-1) * x;
            else y = (n-1) - (k - ((n-1) * x));
            return y;
        }
    }
};