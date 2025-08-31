// Last updated: 01/09/2025, 00:57:50
class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string>b (bannedWords.begin(),bannedWords.end());
        int c = 0;
        for(auto i : message){
            if(b.find(i) != b.end()) c++;
            if(c == 2){
                return true;
            }
        }
        return false;
    }
};