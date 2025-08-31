// Last updated: 01/09/2025, 00:58:33
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int p=0,q=0;
        for(int i=1;i<=n;i++){
            if(i%m==0) p+=i;
            else if(i%m!=0) q+=i;
        }
    return q-p;
    }
};