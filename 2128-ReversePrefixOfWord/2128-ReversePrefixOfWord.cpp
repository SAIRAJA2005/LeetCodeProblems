// Last updated: 01/09/2025, 01:00:27
class Solution {
public:
    string reversePrefix(string word, char ch) {
        string newString = "";
        int i = 0 ,k = -1;
        while(i < word.size()){
            if(word[i] == ch){
                newString += word[i]; k = i;
                break;
            }
            else newString += word[i];
            i++;
        }
        if(k == -1) return word;
        reverse(newString.begin(),newString.end());
        for(int i = k+1 ; i < word.size() ; i++) newString += word[i];
        return newString;
    }
};