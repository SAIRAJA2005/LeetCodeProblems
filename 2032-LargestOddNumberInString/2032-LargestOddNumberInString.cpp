// Last updated: 01/09/2025, 01:00:44
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for(int i = n - 1 ; i >= 0 ;i--){
            if((num[i] - '0') % 2 != 0) {
                return num.substr(0,i+1);  
            }         
        }
        return "";
    }
};