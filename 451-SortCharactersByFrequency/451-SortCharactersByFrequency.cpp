// Last updated: 01/09/2025, 01:04:08
class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        multimap<int,char>mp1;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            mp1.insert({i.second,i.first});
        }
        string S = "";
        
        for(auto i:mp1){
            S = string(i.first,i.second)+S;
        }
        return S;
    }
};