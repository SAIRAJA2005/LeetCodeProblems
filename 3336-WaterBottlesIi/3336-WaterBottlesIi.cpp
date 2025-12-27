// Last updated: 27/12/2025, 21:42:53
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int sum = numBottles;
        while(numBottles>=numExchange){
            numBottles = numBottles-numExchange + 1;
            sum++;
            numExchange++;
        } 
        return sum;
    }
};