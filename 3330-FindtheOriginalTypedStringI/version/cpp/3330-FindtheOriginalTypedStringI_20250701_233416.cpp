// Last updated: 01/07/2025, 23:34:16
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