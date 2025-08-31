// Last updated: 01/09/2025, 00:58:57
class Solution {
public:
    int sumOfMultiples(int n) {
        int p=0;
        for(int i=1;i<=n;i++){
            if(i%3==0 || 3%i==0) p+=i;
            else if (i%5==0 || 5%i==0) p+=i;
            else if (i%7==0 || 7%i==0) p+=i;
        }
    return p-1; 
    }
};