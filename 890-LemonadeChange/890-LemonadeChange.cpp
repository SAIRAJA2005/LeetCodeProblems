// Last updated: 01/09/2025, 01:03:12
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_dollars = 0, ten_dollars = 0;
        for (int x : bills) {
            if (x == 5) {
                five_dollars++;
            } 
            else if (x == 10) {
                if (five_dollars > 0) {
                    five_dollars--;
                    ten_dollars++;
                } 
                else {
                    return false;
                }
            } 
            else {
                if (five_dollars > 0 && ten_dollars > 0) {
                    five_dollars--;
                    ten_dollars--;
                } else if (five_dollars > 2) {
                    five_dollars -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};