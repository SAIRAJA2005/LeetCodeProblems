// Last updated: 01/09/2025, 00:57:31
class Solution {
public:
    string fun(string s){
        string sm = "";
        for(int i = 0 ; i < s.size()-1 ; i++){
            sm += to_string((s[i]-'0' + s[i+1]-'0') % 10);
        }
        return sm;
    }
    bool hasSameDigits(string s) {
        while(s.size() != 2){
            s = fun(s);
        }
        return s[0] == s[1];
    }
};