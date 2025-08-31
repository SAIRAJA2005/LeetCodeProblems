// Last updated: 01/09/2025, 00:59:57
class Solution {
public:
    bool isDigit(int n){
        int sm = 0;
        if (to_string(n).size() == 1){
            if(n % 2 ==0) return true;
            return false;
        }
        while(n > 0){
            sm += n % 10;
            n /=10;
        }
        if(sm % 2 ==0) return true;
        return false;
    }
    int countEven(int num) {
        int cnt = 0;
        for(int i = 1 ; i <= num ; i++){
            if(isDigit(i) == true) cnt++;
        }
        return cnt;
    }
};