// Last updated: 01/09/2025, 00:57:54
class Solution {
public:
    string compressedString(string word) {
        int i = 0;
        string comp = "";
        while(i < word.size()){
            char c = word[i];
            int cnt = 0;
            while(i < word.size() && word[i] == c && cnt < 9){
                cnt++;
                i++;
            }
            comp += to_string(cnt) + c;
        }
        return comp;
    }
};