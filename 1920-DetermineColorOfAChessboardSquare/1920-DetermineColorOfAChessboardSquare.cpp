// Last updated: 01/09/2025, 01:01:03
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int k = int(coordinates[0]);
        int k1 = int(coordinates[1]);
        if(k%2!=0 && k1%2!=0) return false;
        else if(k%2==0 && k1%2==0)return false;
        return true;;
    }
};