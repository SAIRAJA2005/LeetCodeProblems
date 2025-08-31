// Last updated: 01/09/2025, 01:03:56
class Solution {
public:
    bool detectCapitalUse(string word) {
        int k = 0, k1 = 0, k2 = 0;
        if(int(word[0])>=65 && int(word[0])<=90) k2=1;
        for(int i = 0;i<word.size();i++){
            if(int(word[i])>=65 && int(word[i])<=90) k++;
            if(int(word[i])>=97 && int(word[i])<=122) k1++;
        }
        if (k==word.size() || k1==word.size() || k2+k1 == word.size()) return true;
        return false;
    }
};