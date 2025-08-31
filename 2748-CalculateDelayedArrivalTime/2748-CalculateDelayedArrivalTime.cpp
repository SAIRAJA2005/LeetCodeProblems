// Last updated: 01/09/2025, 00:59:02
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int k=arrivalTime+delayedTime;
        if(k<24) return k;
        else if(k==24) return 0;
        else return abs(24-k);
    }
};