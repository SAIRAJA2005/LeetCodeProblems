// Last updated: 01/09/2025, 01:03:30
class Solution {
public:
    bool judgeCircle(string moves) {
        int k=0;
        if(moves.size()%2!=0) return false;
        else{
            int x=0,y=0;
            for(auto i:moves){
                if (i=='U') x++;
                else if(i=='D') x--;
                else if(i=='L') y++;
                else if(i=='R') y--;
            }
            if (x==0 && y==0) return true;
            return false;
        }
    }
};