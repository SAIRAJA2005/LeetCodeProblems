// Last updated: 01/09/2025, 00:57:51
class Solution {
public:
    string losingPlayer(int x, int y) {
        int c = x / 1;
        int k = y / 4;
        int l = min(c,k);
        if(l % 2 == 1) return "Alice";
        else return "Bob";        
    }
};