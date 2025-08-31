// Last updated: 01/09/2025, 01:00:59
class Solution {
public:
    string truncateSentence(string s, int k) {
        string n = "";
        int c = 0,i = 0;
        while(c!=k && i!=s.size()){
            if(s[i]==' '){
                c++;
            }
            if(c!=k){
                n+=s[i];
                i++;
            } 
        }
        return n;
    }
};