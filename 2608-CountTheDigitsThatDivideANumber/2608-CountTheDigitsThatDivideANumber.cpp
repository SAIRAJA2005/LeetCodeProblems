// Last updated: 01/09/2025, 00:59:21
class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int p=num;
        while(num!=0){
            int k=num%10;
            if(p%k==0) c++;
            num=num/10;
        }
        return c;
    }
};