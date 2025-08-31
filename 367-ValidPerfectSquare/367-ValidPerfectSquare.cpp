// Last updated: 01/09/2025, 01:04:21
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=1;
        while(i*i<num){
            i++;
        }
        if(i*i==num) return true;
        return false;
    }
};