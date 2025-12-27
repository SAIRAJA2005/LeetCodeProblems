// Last updated: 27/12/2025, 21:42:23
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int,int>mp;
        int maxVowel = 0;
        int maxConst = 0;
        for(auto ch : s){
            int c = ch - 'a';
            mp[c]++;
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                maxVowel = max(maxVowel , mp[c]);
            }
            else{
                maxConst  = max(maxConst, mp[c]);
            }
        }
        return maxVowel + maxConst;
    }
};