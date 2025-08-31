// Last updated: 01/09/2025, 00:59:58
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for(int i = 0 ; i < words.size() ; i++){
            string st = "";
            for(int j = 0 ; j < words[i].size() ; j++){
                st += words[i][j];
                if(st == pref) cnt++;
            }
        }
        return cnt;
    }
};