// Last updated: 01/09/2025, 00:58:40
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string k;
        for (int i=0;i<words.size();i++) k+=words[i][0];
        if (k==s) return true;
        return false;
    }
};