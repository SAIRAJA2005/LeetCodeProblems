// Last updated: 01/09/2025, 01:01:33
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){
            int refill = numBottles / numExchange;
            ans += refill;
            int empty = numBottles % numExchange;
            numBottles = refill+empty;
        }
        return ans;
    }
};