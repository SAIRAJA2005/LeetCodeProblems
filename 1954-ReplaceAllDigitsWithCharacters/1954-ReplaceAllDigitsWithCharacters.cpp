// Last updated: 01/09/2025, 01:00:57
class Solution {
public:
    string replaceDigits(string s) {
        string raj = "";
        raj[s.size()];
        for(int i = 0 ; i < s.size() ; i++){
            if(isalpha(s[i])){
                raj += s[i];
            }
            else{
                raj += char(s[i-1] + (s[i] - '0'));
            }
        }
        return raj;
    }
};