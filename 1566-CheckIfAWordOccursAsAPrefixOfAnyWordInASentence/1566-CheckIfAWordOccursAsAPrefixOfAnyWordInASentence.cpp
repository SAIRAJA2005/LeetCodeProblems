// Last updated: 01/09/2025, 01:01:52
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string n = "";
        int cnt = 1;
        for(auto i : sentence){
            if(i == ' '){
                if(n.substr(0,searchWord.size()) == searchWord){
                    return cnt;
                }
                cnt++;
                n.clear();
            }
            else{
                n += i;
            }
        }
        if(n.substr(0,searchWord.size()) == searchWord){
            return cnt;
        }
        return -1;
    }
};