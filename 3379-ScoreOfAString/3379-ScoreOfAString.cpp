// Last updated: 01/09/2025, 00:58:06
class Solution {
public:
    int scoreOfString(string s) {
        int sm = 0;
        for(int i = 0 ; i < s.size()-1 ; i++){
            sm += abs(int(s[i]) - int(s[i+1]));
        }
        return sm;
    }
};