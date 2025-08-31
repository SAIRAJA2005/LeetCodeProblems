// Last updated: 01/09/2025, 01:01:04
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int cnt = 0;
        char f, f1, s, s11;
        bool k = false;
        bool k2 = false;
        for(int i = 0 ; i < s1.size() ; i++){
            if(cnt >= 2 && s1[i] != s2[i]) cnt++;
            if(s1[i] != s2[i] && k == false){
                f = s1[i]; // b
                f1 = s2[i]; // k
                k = true;
                cnt++;
            }
            else if(s1[i] != s2[i] && k2 == false){
                s = s1[i]; // k
                s11 = s2[i];
                cnt++;
                k2 = true;
            }
            //if(cnt == 2) break;
        }
        if(cnt > 2) return false;
        return cnt == 2 && f == s11 && f1 == s;
    }
};