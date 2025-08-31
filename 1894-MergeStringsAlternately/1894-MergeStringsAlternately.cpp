// Last updated: 01/09/2025, 01:01:07
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newOne = "";
        int i = 0,j = 0;
        while(i < word1.size() && j < word2.size()){
            newOne += word1[i];
            newOne += word2[j];
            i++;
            j++;
        }
        while(i != word1.size()){
            newOne += word1[i];
            i++;
        }
        while(j != word2.size()){
            newOne += word2[j];
            j++;
        }
        return newOne;
    }
};