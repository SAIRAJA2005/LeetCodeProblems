// Last updated: 01/09/2025, 00:58:28
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>num;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==x){
                    num.push_back(i); 
                    break;
                } 
            }
        }
        return num;
    }
};