// Last updated: 01/09/2025, 00:58:51
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i = 0 ;
        int j = s.size()-1;
        string k = "";
        while(i < j){
            if(s[i]<s[j]) s[j] = s[i];
            else if(s[i]>s[j]) s[i]=s[j];
            i++;
            j--;
        }
        return s;
    }
};