// Last updated: 01/09/2025, 01:00:45
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int firstValue = 0;
        int secondValue = 0;
        int targetValue = 0;
        for(auto i : firstWord){
            firstValue = firstValue * 10 + abs(int(i) - 97);
        }
        for(auto i : secondWord){
            secondValue = secondValue * 10 + abs(int(i) - 97);
        }
        for(auto i : targetWord){
            targetValue = targetValue * 10 + abs(int(i) - 97);
        }
        return (firstValue+secondValue == targetValue);
    }
};