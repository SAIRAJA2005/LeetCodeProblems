// Last updated: 01/09/2025, 01:03:00
class Solution {
public:
    bool check(char c){
        if((97 <= int(c) && int(c) <= 122) || (65 <= int(c) && int(c) <= 90)) return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i = 0,j = s.size()-1;
        while(i < j){
            if(check(s[i]) == true and check(s[j]) ==true){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(check(s[i]) == true and check(s[j]) == false) j--;
            else if(check(s[i]) == false and check(s[j]) == true) i++;
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};