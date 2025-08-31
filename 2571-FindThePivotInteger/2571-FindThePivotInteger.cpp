// Last updated: 01/09/2025, 00:59:28
class Solution {
public:
    int pivotInteger(int n) {
        int l = n*(n+1)/2;
        int sum_1 = 0;
        while(l>sum_1){ 
            sum_1+=n;
            if(sum_1 == l){  
                return n;
            }
            l = l-n;
            n--;
        }
        return -1;
    }
};