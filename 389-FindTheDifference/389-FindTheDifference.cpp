// Last updated: 01/09/2025, 01:04:17
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());sort(t.begin(),t.end());
        int n = s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]) return t[i];
        }
        return t[n];
    }
};