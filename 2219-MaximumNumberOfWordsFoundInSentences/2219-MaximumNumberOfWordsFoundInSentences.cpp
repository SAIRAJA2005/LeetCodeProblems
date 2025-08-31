// Last updated: 01/09/2025, 01:00:14
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int p=0,k;
        for(int i=0;i<sentences.size();i++){
            k=0;
            k = count(sentences[i].begin(),sentences[i].end(),' ');
            if(p<k) p=k;
        }
        return p+1;
    }
};