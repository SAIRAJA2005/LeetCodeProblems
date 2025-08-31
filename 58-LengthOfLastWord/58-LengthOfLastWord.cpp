// Last updated: 01/09/2025, 01:06:20
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i = s.size()-1;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        while(i >= 0 && s[i] != ' '){
            len++;
            i--;
        }
        return len;
    }
};