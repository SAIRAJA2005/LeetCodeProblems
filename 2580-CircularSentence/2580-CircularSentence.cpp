// Last updated: 01/09/2025, 00:59:25
class Solution {
public:
    bool isCircularSentence(string sentence) {
        int sz = sentence.size();
        if(sentence[0] != sentence[sz - 1]) return false;
        for(int i = 0 ; i < sz - 1 ; i++){
            if(sentence[i] == ' '){
                if(sentence[i - 1] != sentence[i + 1]){
                    return false;
                }
            }
        }
        return true;
    }
};