// Last updated: 01/09/2025, 01:04:43
class Solution {
public:
    int addDigits(int num) {
    int n=0;
    while(num>=10){
        n=0;
        while(num!=0){
            int k=num%10;
            n=n+k;
            num=num/10;
        }
        num=n;
    }
    return num;
    }
};