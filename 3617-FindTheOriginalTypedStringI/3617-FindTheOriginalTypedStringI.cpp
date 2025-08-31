// Last updated: 01/09/2025, 00:57:46
class Solution {
public:
    int possibleStringCount(string word) {
        int cnt = word.size();
        for(int i = 0 ; i < word.size() - 1 ; i++){
            if(word[i] != word[i + 1]){
                cnt--;
            }
        }
        return cnt;
    }
};