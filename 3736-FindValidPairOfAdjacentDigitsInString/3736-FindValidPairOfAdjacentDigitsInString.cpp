// Last updated: 01/09/2025, 00:57:37
class Solution {
public:
    bool fun(char tar, string s){
        int str = count(s.begin(),s.end(),tar);
        int c = tar - '1' + 1;
        return c == str;
    }
    string findValidPair(string s) {
        string k = "";
        for(int i = 0 ; i < s.size()-1; i++){
            if(fun(s[i],s)){
                int l1  = s[i] - '1' + 1;
                int l2 = s[i+1] - '1' + 1;
                if(fun(s[i+1],s) && s[i] != s[i+1]){
                    k += s[i];
                    k += s[i+1];
                    return k;
                }
            }
        }
        return k;
    }
};