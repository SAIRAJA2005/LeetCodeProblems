// Last updated: 01/09/2025, 00:59:27
class Solution {
public:
    int appendCharacters(string s, string t) {
        int idxS = 0;
        int idxT = 0;
        while(idxS < s.size()){
            if(s[idxS] == t[idxT]){
                idxT++;
            }
            idxS++;
        } 
        return t.size()-idxT;
    }
};