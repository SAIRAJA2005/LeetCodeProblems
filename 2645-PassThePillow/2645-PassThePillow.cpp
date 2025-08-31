// Last updated: 01/09/2025, 00:59:11
class Solution {
public:
    int passThePillow(int n, int time) {
        int index=1;
        int direction=1;
        while(time--) {
            index+=direction;
            if(index==1||index==n)
                direction*=-1;
        }
        return index;
    }
};