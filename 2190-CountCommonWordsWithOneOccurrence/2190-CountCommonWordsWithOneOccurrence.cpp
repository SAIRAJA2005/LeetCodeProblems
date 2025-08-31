// Last updated: 01/09/2025, 01:00:18
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mp1;
        map<string,int>mp2;
        int cnt = 0;
        for(auto i : words1) mp1[i]++;
        for(auto i : words2) mp2[i]++;
        for(auto i : mp1){
            for(auto j : mp2){
                if(i.first == j.first && i.second + j.second == 2) cnt++;
            }
        }
        return cnt;
    }
};