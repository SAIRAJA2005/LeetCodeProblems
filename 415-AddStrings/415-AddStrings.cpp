// Last updated: 01/09/2025, 01:04:11
class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string resString = "";
        int n, car = 0;
        for(int i = 0 ; i < max(num1.size(), num2.size()) ; i++) {
            if(i < num1.size() && i < num2.size()) n = (num1[i] - '0') + (num2[i] - '0') + car;
            else if(i >= num2.size()) n = num1[i] - '0' + car;
            else n = num2[i] - '0' + car;
            car = n / 10;                              // 1 1
            resString = to_string(n % 10) + resString; // 3 2 1
        }
        if(car != 0) resString = to_string(car) + resString;
        return resString;
        
    }
};