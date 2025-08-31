// Last updated: 01/09/2025, 01:02:07
class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num!=0){
            if(num%2==0) num=num/2;
            else num=num-1;
            c++;
        }
        return c;
    }
};