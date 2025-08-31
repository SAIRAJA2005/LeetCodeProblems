// Last updated: 01/09/2025, 01:04:16
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idxS = 0, idxT = 0 , cnt = 0;
        while(idxS < s.size() && idxT < t.size()){
            if(s[idxS] == t[idxT]){
                idxT++;
                idxS++;
                cnt++;
            }
            else{
                idxT++;
            }
        }
        if(cnt == s.size()) return true;
        return false;
    }
};