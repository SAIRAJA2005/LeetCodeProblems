// Last updated: 01/09/2025, 00:58:09
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int mx = 0;
        map<char,int>mp;
        int i = 0;
        for(int j = 0 ; j < s.size() ; j++){
            mp[s[j]]++;
            while(mp[s[j]] > 2){
                mp[s[i]]--;
                i++;
            }
            mx = max(mx,j - i + 1);
        }
        return mx;
    }
};