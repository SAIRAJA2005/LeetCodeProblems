// Last updated: 30/07/2025, 00:05:20
class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while(n > 1){
            cnt += n & 1;
            n = n >> 1;
        }
        if(n == 1) cnt ++;
        return cnt;
    }
};