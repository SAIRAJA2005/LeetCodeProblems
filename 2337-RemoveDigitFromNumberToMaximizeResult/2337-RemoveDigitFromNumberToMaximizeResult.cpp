// Last updated: 01/09/2025, 00:59:51
class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxResult = "";
        for (size_t i = 0; i < number.size(); i++) {
            if (number[i] == digit) {
                string temp = number.substr(0, i) + number.substr(i + 1);
                if (temp > maxResult) {
                    maxResult = temp;
                }
            }
        }
        return maxResult;
    }
};