// Last updated: 01/09/2025, 01:04:25
class Solution {
public:
    bool check(char c){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() -1 ;
        while(i < j){
            if(check(s[i]) == true && check(s[j]) == true){
                swap(s[i], s[j]);
                i++;j--;
            }
            else if (check(s[i]) == true && check(s[j]) == false) j--;
            else if (check(s[i]) == false && check(s[j]) == true) i++;
            else{
                i++;j--;
            }
        }  
        return s; 
    }
};