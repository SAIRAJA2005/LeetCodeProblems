// Last updated: 01/09/2025, 01:01:14
class Solution {
public:
    bool IsVowel(char c){
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        else if (c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int v = 0,v1 = 0;
        for(int i = 0;i<s.size()/2;i++){
            if (IsVowel(s[i])==true) v++;
        }
        for(int i = s.size()/2;i<s.size();i++){
            if (IsVowel(s[i])==true) v1++;
        }
        if (v==v1) return true;
        return false;
    }
};