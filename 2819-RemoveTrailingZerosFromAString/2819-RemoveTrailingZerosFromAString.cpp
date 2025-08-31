// Last updated: 01/09/2025, 00:58:50
class Solution {
public:
    string removeTrailingZeros(string num) {
        if(num[num.size() - 1] == '0'){
            int i = num.size() - 1;
            while(i >= 0 && num[i] == '0'){
                i--;
            }
            num = num.substr(0 , i + 1);
            return num;
        }
        else{
            return num;
        }
    }
};