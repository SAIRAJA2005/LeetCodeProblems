// Last updated: 01/09/2025, 00:59:44
class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;if(mp[s[i]]==2) return s[i];
        }
        return -1;
    }
};