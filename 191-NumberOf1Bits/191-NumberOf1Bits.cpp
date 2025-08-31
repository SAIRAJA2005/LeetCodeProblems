// Last updated: 01/09/2025, 01:05:14
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