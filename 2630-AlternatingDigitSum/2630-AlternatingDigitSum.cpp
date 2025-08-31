// Last updated: 01/09/2025, 00:59:16
class Solution {
public:
    int alternateDigitSum(int n) {
        string s = to_string(n);
        int sm = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(i%2 == 0) sm+=s[i]-'0';
            if (i%2 !=0) sm-=s[i]-'0';
        }
        return sm;
    }
};