// Last updated: 01/09/2025, 01:06:54
class Solution {
public:
    int romanToInt(string s) {
        vector<char>p = {'I','V','X','L','C','D','M'};
        vector<int>v = {1,5,10,50,100,500,1000};
        unordered_map<char,int>mp;
        for(int i=0;i<p.size();i++){
            mp[p[i]] = v[i];
        }
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(mp[s[i]]<mp[s[i+1]]) ans-=mp[s[i]];
            else ans+=mp[s[i]];
        }
        return ans;
    }
};