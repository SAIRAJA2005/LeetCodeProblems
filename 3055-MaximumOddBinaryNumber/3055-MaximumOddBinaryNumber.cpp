// Last updated: 01/09/2025, 00:58:34
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string Zero = "", One = "", fls = "";
        for(auto i : s){
            if(i == '0') Zero += i;
            else One += i;
        }
        for(int i = 0 ; i < One.size()-1; i++){
            fls += One[i];
        }
        for(int i = 0 ; i < Zero.size(); i++){
            fls += Zero[i];
        }
        fls += '1';
        return fls;

    }
};