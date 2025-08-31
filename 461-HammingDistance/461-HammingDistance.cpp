// Last updated: 01/09/2025, 01:04:06
class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x ^ y;
        int cnt = 0;
        for(int i = 0 ; i < 31 ; i++){
            if(ans & (1 << i)) cnt++;
        }
        return cnt;
    }
};