// Last updated: 01/09/2025, 01:02:15
class Solution {
public:
    int subtractProductAndSum(int n) {
        int n1=0;
        int n2=1;
        while(n!=0){
            int k=n%10;
            n1=n1+k;
            n2=n2*k;
            n=n
            /10;
        }
        return n2-n1;
    }
};