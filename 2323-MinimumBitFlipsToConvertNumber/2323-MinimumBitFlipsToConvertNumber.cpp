// Last updated: 01/09/2025, 00:59:53
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        int cnt = 0;
        for(int i = 0 ; i < 31 ; i++){
            if(ans & (1 << i)){
                cnt++;
            }
        }
        return cnt;
    }
};