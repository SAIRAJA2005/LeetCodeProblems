// Last updated: 01/09/2025, 01:00:08
class Solution {
public:
    bool checkString(string s) {
        for(int i = 1 ; i < s.size() ; i++){
            if(s[i]=='a' && s[i-1] == 'b') return false;
        }
        return true;
    }
};